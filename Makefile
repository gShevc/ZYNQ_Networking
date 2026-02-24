# Makefile -- Top-level build orchestration for FPGA project
# Delegates to Python scripts in scripts/. Requires Python 3.11+.

PYTHON   ?= python
PROJ_DIR := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))

.PHONY: sim lint synth impl bit program clean sim-list help

help: ## Show available targets
	@grep -E '^[a-zA-Z_-]+:.*##' $(MAKEFILE_LIST) | \
	  awk 'BEGIN {FS = ":.*## "}; {printf "  %-12s %s\n", $$1, $$2}'

sim: ## Run simulation (TARGET=name, MODULE=name, TRACE=1 optional)
	$(PYTHON) $(PROJ_DIR)scripts/sim.py $(if $(TARGET),$(TARGET),default) \
	  $(if $(MODULE),--module $(MODULE),) \
	  $(if $(TRACE),--trace,)

lint: ## Run Verilator lint only (TARGET=name, MODULE=name optional)
	$(PYTHON) $(PROJ_DIR)scripts/sim.py $(if $(TARGET),$(TARGET),default) \
	  $(if $(MODULE),--module $(MODULE),) \
	  --lint-only

sim-list: ## List all available simulation targets
	$(PYTHON) $(PROJ_DIR)scripts/sim.py --list

synth: ## Run Vivado synthesis
	$(PYTHON) $(PROJ_DIR)scripts/build.py synth

impl: ## Run Vivado synthesis + implementation
	$(PYTHON) $(PROJ_DIR)scripts/build.py impl

bit: ## Run full flow through bitstream generation
	$(PYTHON) $(PROJ_DIR)scripts/build.py bit

program: ## Program FPGA (placeholder -- customize for your board)
	@echo "TODO: Add programming TCL invocation for your target board."
	@echo "Example: vivado -mode batch -source scripts/program.tcl"

clean: ## Remove all build and simulation artifacts
	rm -rf $(PROJ_DIR)impl/*
	rm -rf $(PROJ_DIR)sim/
