INCLUDE_DIRECTORIES(
  ${GLIB2_MAIN_INCLUDE_DIR}
  ${GLIB2_INTERNAL_INCLUDE_DIR}
  ${GTHREAD2_MAIN_INCLUDE_DIR}
)

PIXHAWK_EXECUTABLE(px_waypointplanner px_waypointplanner.cc)
PIXHAWK_LINK_LIBRARIES(px_waypointplanner
  ${CXCORE_LIBRARY}
  mavconn_lcm
  ${Boost_PROGRAM_OPTIONS_LIBRARY}
)
