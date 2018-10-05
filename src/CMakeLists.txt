add_definitions(-std=gnu99)

add_library(gridmap-renderer SHARED
            renderer_gridmap.c tile_set.c)

target_link_libraries(gridmap-renderer ${OPENGL_LIBRARIES})

set(REQUIRED_LIBS bot2-vis gridmap-utils lcmtypes_obstacle-detector lcmtypes_gridmap)

pods_use_pkg_config_packages(gridmap-renderer ${REQUIRED_LIBS})

pods_install_headers(renderer_gridmap.h DESTINATION
                     gridmap_renderer)

pods_install_libraries(gridmap-renderer)
pods_install_pkg_config_file(gridmap-renderer
    CFLAGS
    LIBS -lgridmap-renderer
    REQUIRES ${REQUIRED_LIBS}
    VERSION 0.0.1)
