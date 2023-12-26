
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name june5 -dir "C:/lab/june5/planAhead_run_1" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "june5.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {june5.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top june5 $srcset
add_files [list {june5.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3
