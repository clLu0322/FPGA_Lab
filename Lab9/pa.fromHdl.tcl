
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name may29 -dir "C:/lab/may29/planAhead_run_1" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "may29.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {may29.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top may29 $srcset
add_files [list {may29.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3
