
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name may22 -dir "C:/lab/may22/planAhead_run_1" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "may22.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {may22.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top may22 $srcset
add_files [list {may22.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3
