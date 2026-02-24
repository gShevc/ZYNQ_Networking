# 2026-02-24T15:47:03.266627200
import vitis

client = vitis.create_client()
client.set_workspace(path="vitis")

client.delete_component(name="platform_ethernet")

client.delete_component(name="platform_ethernet")

client.delete_component(name="platform_test")

client.delete_component(name="platform_uart")

client.delete_component(name="componentName")

