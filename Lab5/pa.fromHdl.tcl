
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name may1 -dir "C:/lab/may1/planAhead_run_2" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "may1.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {may1.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top may1 $srcset
add_files [list {may1.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3
