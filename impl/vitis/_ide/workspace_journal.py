# 2026-02-24T10:56:57.975770
import vitis

client = vitis.create_client()
client.set_workspace(path="vitis")

platform = client.create_platform_component(name = "platform_uart",hw_design = "$COMPONENT_LOCATION/../../zynqNetwork/design_1_wrapper_uart.xsa",os = "standalone",cpu = "ps7_cortexa9_0",domain_name = "standalone_ps7_cortexa9_0",compiler = "gcc")

comp = client.create_app_component(name="hello_world",platform = "$COMPONENT_LOCATION/../platform_uart/export/platform_uart/platform_uart.xpfm",domain = "standalone_ps7_cortexa9_0",template = "hello_world")

comp = client.get_component(name="hello_world")
comp.build()

platform = client.get_component(name="platform_uart")
status = platform.build()

comp.build()

comp = client.create_app_component(name="zynq_dram_test",platform = "$COMPONENT_LOCATION/../platform_uart/export/platform_uart/platform_uart.xpfm",domain = "standalone_ps7_cortexa9_0",template = "zynq_dram_test")

comp = client.get_component(name="zynq_dram_test")
comp.build()

