# Simulasi axi pertama


1. Hanya testing biasa dan nggak ada istimewanya

Ada dua file ax_lite_regs.v dan tb_file ax_lite_regs.v
```
verilator --binary --timing \
    --top-module tb_axi_lite_regs \
    axi_lite_regs.v \
    tb_axi_lite_regs.v
```
hanya untuk melakukann simulasi biasa tanpa menggunakan wave





