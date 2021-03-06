define laser ranger
(
  sensor
  (
    range_max 5.0
    fov 120.0
    samples 640
  )
  # generic model properties
  color "black"
  size [ 0.06 0.15 0.03 ]
)

define diff_drive_robot position
(
  pose [ 0.0 0.0 0.0 0.0 ]

  odom_error [0.01 0.01 999999 999999 999999 0.01]

  size [ 0.25 0.25 0.40 ]
  origin [ 0.0 0.0 0.0 0.0 ]
  gui_nose 1
  color "red"

  # kinematics
  drive "diff"

  # spawn sensors
  laser(pose [ -0.1 0.0 -0.11 0.0 ])
)
