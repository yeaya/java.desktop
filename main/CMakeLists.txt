#machine generated

if(JCPP_OS MATCHES "windows")
	jcpp_add_dependencies(
		"java.prefs:17.35"
		"java.datatransfer:17.35"
		"java.xml:17.35"
		"java.base:17.35"
	)
endif()

if(JCPP_OS MATCHES "windows")
	include_directories("windows/classes")
	include_directories("windows/native")
endif()

if(JCPP_OS MATCHES "windows")
	add_subdirectory("windows/classes")
	add_subdirectory("windows/native")
endif()

if(JCPP_OS MATCHES "windows")
	add_definitions("-DUSE_PORTS=TRUE")
	add_definitions("-DUSE_DAUDIO=TRUE")
	add_definitions("-DUSE_PLATFORM_MIDI_OUT=TRUE")
	add_definitions("-DUSE_PLATFORM_MIDI_IN=TRUE")
endif()

if(JCPP_OS MATCHES "windows")
	set(local_object ${local_object}
		"$<TARGET_OBJECTS:windows-classes>"
		"$<TARGET_OBJECTS:windows-classes.com.sun.acce_2>"
		"$<TARGET_OBJECTS:windows-classes.com.sun.beans>"
		"$<TARGET_OBJECTS:windows-classes.com.sun.bean_3>"
		"$<TARGET_OBJECTS:windows-classes.com.sun.bean_4>"
		"$<TARGET_OBJECTS:windows-classes.com.sun.bean_5>"
		"$<TARGET_OBJECTS:windows-classes.com.sun.bean_6>"
		"$<TARGET_OBJECTS:windows-classes.com.sun.bean_7>"
		"$<TARGET_OBJECTS:windows-classes.com.sun.bean_8>"
		"$<TARGET_OBJECTS:windows-classes.com.sun.ima_11>"
		"$<TARGET_OBJECTS:windows-classes.com.sun.ima_12>"
		"$<TARGET_OBJECTS:windows-classes.com.sun.ima_13>"
		"$<TARGET_OBJECTS:windows-classes.com.sun.ima_14>"
		"$<TARGET_OBJECTS:windows-classes.com.sun.ima_15>"
		"$<TARGET_OBJECTS:windows-classes.com.sun.ima_16>"
		"$<TARGET_OBJECTS:windows-classes.com.sun.ima_17>"
		"$<TARGET_OBJECTS:windows-classes.com.sun.ima_18>"
		"$<TARGET_OBJECTS:windows-classes.com.sun.ima_19>"
		"$<TARGET_OBJECTS:windows-classes.com.sun.jav_20>"
		"$<TARGET_OBJECTS:windows-classes.com.sun.jav_22>"
		"$<TARGET_OBJECTS:windows-classes.com.sun.jav_23>"
		"$<TARGET_OBJECTS:windows-classes.com.sun.jav_24>"
		"$<TARGET_OBJECTS:windows-classes.com.sun.jav_25>"
		"$<TARGET_OBJECTS:windows-classes.com.sun.jav_26>"
		"$<TARGET_OBJECTS:windows-classes.com.sun.jav_27>"
		"$<TARGET_OBJECTS:windows-classes.com.sun.med_28>"
		"$<TARGET_OBJECTS:windows-classes.com.sun.swi_32>"
		"$<TARGET_OBJECTS:windows-classes.com.sun.swi_34>"
		"$<TARGET_OBJECTS:windows-classes.com.sun.swi_36>"
		"$<TARGET_OBJECTS:windows-classes.java.applet>"
		"$<TARGET_OBJECTS:windows-classes.java.awt>"
		"$<TARGET_OBJECTS:windows-classes.java.awt.color>"
		"$<TARGET_OBJECTS:windows-classes.java.awt.de_37>"
		"$<TARGET_OBJECTS:windows-classes.java.awt.dnd>"
		"$<TARGET_OBJECTS:windows-classes.java.awt.dn_38>"
		"$<TARGET_OBJECTS:windows-classes.java.awt.event>"
		"$<TARGET_OBJECTS:windows-classes.java.awt.font>"
		"$<TARGET_OBJECTS:windows-classes.java.awt.geom>"
		"$<TARGET_OBJECTS:windows-classes.java.awt.im>"
		"$<TARGET_OBJECTS:windows-classes.java.awt.im_39>"
		"$<TARGET_OBJECTS:windows-classes.java.awt.image>"
		"$<TARGET_OBJECTS:windows-classes.java.awt.im_40>"
		"$<TARGET_OBJECTS:windows-classes.java.awt.peer>"
		"$<TARGET_OBJECTS:windows-classes.java.awt.print>"
		"$<TARGET_OBJECTS:windows-classes.java.beans>"
		"$<TARGET_OBJECTS:windows-classes.java.beans._41>"
		"$<TARGET_OBJECTS:windows-classes.javax.acces_42>"
		"$<TARGET_OBJECTS:windows-classes.javax.imageio>"
		"$<TARGET_OBJECTS:windows-classes.javax.image_43>"
		"$<TARGET_OBJECTS:windows-classes.javax.image_44>"
		"$<TARGET_OBJECTS:windows-classes.javax.image_46>"
		"$<TARGET_OBJECTS:windows-classes.javax.image_47>"
		"$<TARGET_OBJECTS:windows-classes.javax.image_48>"
		"$<TARGET_OBJECTS:windows-classes.javax.image_49>"
		"$<TARGET_OBJECTS:windows-classes.javax.image_50>"
		"$<TARGET_OBJECTS:windows-classes.javax.print>"
		"$<TARGET_OBJECTS:windows-classes.javax.print_51>"
		"$<TARGET_OBJECTS:windows-classes.javax.print_52>"
		"$<TARGET_OBJECTS:windows-classes.javax.print_53>"
		"$<TARGET_OBJECTS:windows-classes.javax.sound_54>"
		"$<TARGET_OBJECTS:windows-classes.javax.sound_55>"
		"$<TARGET_OBJECTS:windows-classes.javax.sound_56>"
		"$<TARGET_OBJECTS:windows-classes.javax.sound_57>"
		"$<TARGET_OBJECTS:windows-classes.javax.swing>"
		"$<TARGET_OBJECTS:windows-classes.javax.swing_59>"
		"$<TARGET_OBJECTS:windows-classes.javax.swing_60>"
		"$<TARGET_OBJECTS:windows-classes.javax.swing_61>"
		"$<TARGET_OBJECTS:windows-classes.javax.swing_62>"
		"$<TARGET_OBJECTS:windows-classes.javax.swing_63>"
		"$<TARGET_OBJECTS:windows-classes.javax.swing_64>"
		"$<TARGET_OBJECTS:windows-classes.javax.swing_65>"
		"$<TARGET_OBJECTS:windows-classes.javax.swing_66>"
		"$<TARGET_OBJECTS:windows-classes.javax.swing_67>"
		"$<TARGET_OBJECTS:windows-classes.javax.swing_68>"
		"$<TARGET_OBJECTS:windows-classes.javax.swing_69>"
		"$<TARGET_OBJECTS:windows-classes.javax.swing_70>"
		"$<TARGET_OBJECTS:windows-classes.javax.swing_71>"
		"$<TARGET_OBJECTS:windows-classes.javax.swing_72>"
		"$<TARGET_OBJECTS:windows-classes.javax.swing_73>"
		"$<TARGET_OBJECTS:windows-classes.javax.swing_74>"
		"$<TARGET_OBJECTS:windows-classes.javax.swing_75>"
		"$<TARGET_OBJECTS:windows-classes.javax.swing_76>"
		"$<TARGET_OBJECTS:windows-classes.javax.swing_77>"
		"$<TARGET_OBJECTS:windows-classes.javax.swing_78>"
		"$<TARGET_OBJECTS:windows-classes.javax.swing_79>"
		"$<TARGET_OBJECTS:windows-classes.javax.swing_80>"
		"$<TARGET_OBJECTS:windows-classes.javax.swing_81>"
		"$<TARGET_OBJECTS:windows-classes.sun.awt>"
		"$<TARGET_OBJECTS:windows-classes.sun.awt.dat_82>"
		"$<TARGET_OBJECTS:windows-classes.sun.awt.dnd>"
		"$<TARGET_OBJECTS:windows-classes.sun.awt.event>"
		"$<TARGET_OBJECTS:windows-classes.sun.awt.geom>"
		"$<TARGET_OBJECTS:windows-classes.sun.awt.im>"
		"$<TARGET_OBJECTS:windows-classes.sun.awt.image>"
		"$<TARGET_OBJECTS:windows-classes.sun.awt.res_83>"
		"$<TARGET_OBJECTS:windows-classes.sun.awt.res_84>"
		"$<TARGET_OBJECTS:windows-classes.sun.awt.shell>"
		"$<TARGET_OBJECTS:windows-classes.sun.awt.util>"
		"$<TARGET_OBJECTS:windows-classes.sun.awt.win_85>"
		"$<TARGET_OBJECTS:windows-classes.sun.awt.www_86>"
		"$<TARGET_OBJECTS:windows-classes.sun.awt.www_87>"
		"$<TARGET_OBJECTS:windows-classes.sun.awt.www_88>"
		"$<TARGET_OBJECTS:windows-classes.sun.font>"
		"$<TARGET_OBJECTS:windows-classes.sun.font.lo_89>"
		"$<TARGET_OBJECTS:windows-classes.sun.java2d>"
		"$<TARGET_OBJECTS:windows-classes.sun.java2d.cmm>"
		"$<TARGET_OBJECTS:windows-classes.sun.java2d._90>"
		"$<TARGET_OBJECTS:windows-classes.sun.java2d._91>"
		"$<TARGET_OBJECTS:windows-classes.sun.java2d.d3d>"
		"$<TARGET_OBJECTS:windows-classes.sun.java2d._92>"
		"$<TARGET_OBJECTS:windows-classes.sun.java2d._93>"
		"$<TARGET_OBJECTS:windows-classes.sun.java2d._94>"
		"$<TARGET_OBJECTS:windows-classes.sun.java2d._95>"
		"$<TARGET_OBJECTS:windows-classes.sun.java2d._96>"
		"$<TARGET_OBJECTS:windows-classes.sun.java2d._97>"
		"$<TARGET_OBJECTS:windows-classes.sun.java2d._98>"
		"$<TARGET_OBJECTS:windows-classes.sun.print>"
		"$<TARGET_OBJECTS:windows-classes.sun.print.r_99>"
		"$<TARGET_OBJECTS:windows-classes.sun.swing>"
		"$<TARGET_OBJECTS:windows-classes.sun.swing.icon>"
		"$<TARGET_OBJECTS:windows-classes.sun.swing.plaf>"
		"$<TARGET_OBJECTS:windows-classes.sun.swing._100>"
		"$<TARGET_OBJECTS:windows-classes.sun.swing._101>"
		"$<TARGET_OBJECTS:windows-classes.sun.swing._102>"
		"$<TARGET_OBJECTS:windows-classes.sun.swing.text>"
		"$<TARGET_OBJECTS:windows-classes.sun.swing._103>"
		"$<TARGET_OBJECTS:windows-native.common.awt._104>"
		"$<TARGET_OBJECTS:windows-native.common.awt._105>"
		"$<TARGET_OBJECTS:windows-native.common.awt._106>"
		"$<TARGET_OBJECTS:windows-native.common.awt._107>"
		"$<TARGET_OBJECTS:windows-native.common.font>"
		"$<TARGET_OBJECTS:windows-native.common.java_108>"
		"$<TARGET_OBJECTS:windows-native.libawt.awt._110>"
		"$<TARGET_OBJECTS:windows-native.libawt.awt._111>"
		"$<TARGET_OBJECTS:windows-native.libawt.awt._112>"
		"$<TARGET_OBJECTS:windows-native.libawt.awt._113>"
		"$<TARGET_OBJECTS:windows-native.libawt.java2d>"
		"$<TARGET_OBJECTS:windows-native.libawt.java_114>"
		"$<TARGET_OBJECTS:windows-native.libawt.java_115>"
		"$<TARGET_OBJECTS:windows-native.libawt.java_116>"
		"$<TARGET_OBJECTS:windows-native.libawt.java_118>"
		"$<TARGET_OBJECTS:windows-native.libawt.java_119>"
		"$<TARGET_OBJECTS:windows-native.libawt.windows>"
		"$<TARGET_OBJECTS:windows-native.libfontmanager>"
		"$<TARGET_OBJECTS:windows-native.libfreetype>"
		"$<TARGET_OBJECTS:windows-native.libfreetype_125>"
		"$<TARGET_OBJECTS:windows-native.libfreetype_126>"
		"$<TARGET_OBJECTS:windows-native.libfreetype_127>"
		"$<TARGET_OBJECTS:windows-native.libfreetype_128>"
		"$<TARGET_OBJECTS:windows-native.libfreetype_129>"
		"$<TARGET_OBJECTS:windows-native.libfreetype_130>"
		"$<TARGET_OBJECTS:windows-native.libfreetype_131>"
		"$<TARGET_OBJECTS:windows-native.libfreetype_132>"
		"$<TARGET_OBJECTS:windows-native.libfreetype_133>"
		"$<TARGET_OBJECTS:windows-native.libfreetype_134>"
		"$<TARGET_OBJECTS:windows-native.libfreetype_135>"
		"$<TARGET_OBJECTS:windows-native.libfreetype_136>"
		"$<TARGET_OBJECTS:windows-native.libharfbuzz>"
		"$<TARGET_OBJECTS:windows-native.libjavajpeg>"
		"$<TARGET_OBJECTS:windows-native.libjawt>"
		"$<TARGET_OBJECTS:windows-native.libjsound>"
		"$<TARGET_OBJECTS:windows-native.liblcms>"
		"$<TARGET_OBJECTS:windows-native.libmlib_image>"
		"$<TARGET_OBJECTS:windows-native.libsplashscreen>"
		"$<TARGET_OBJECTS:windows-native.libsplashsc_137>"
		"$<TARGET_OBJECTS:windows-native.libsplashsc_138>"
	)
endif()

if(BUILD_STATIC_LIB)
	add_library(${JCPP_PROJECT_NAME}_static STATIC "${local_object}" "${source_SRCS}")

	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_static PROPERTIES OUTPUT_NAME "${JCPP_PROJECT_FULL_NAME}")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_static PROPERTIES VERSION ${JCPP_PROJECT_VERSION} SOVERSION 1)

	jcpp_enable_bigobj(${JCPP_PROJECT_NAME}_static)

	install(TARGETS ${JCPP_PROJECT_NAME}_static
		LIBRARY DESTINATION "${JCPP_INSTALL_LIB_DIR}"
		ARCHIVE DESTINATION "${JCPP_INSTALL_LIB_DIR}"
		RUNTIME DESTINATION "${JCPP_INSTALL_BIN_DIR}"
	)
endif()

if(BUILD_SHARED_LIB)
	add_library(${JCPP_PROJECT_NAME}_shared SHARED "${local_object}" "${source_SRCS}")

	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES OUTPUT_NAME "${JCPP_PROJECT_FULL_NAME}")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES CLEAN_DIRECT_OUTPUT 1)
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES VERSION ${JCPP_PROJECT_VERSION} SOVERSION 1)
if(JCPP_OS MATCHES "linux")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES INSTALL_RPATH "\\\$ORIGIN;\\\$ORIGIN/../lib")
elseif(JCPP_OS MATCHES "macos")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES INSTALL_RPATH ".;../lib")
endif()

	if(JCPP_OS MATCHES "windows")
		set(JCPP_EXT_LIBS ${JCPP_EXT_LIBS}
			advapi32.lib dsound.lib winmm.lib user32.lib ole32.lib
			kernel32.lib user32.lib gdi32.lib winspool.lib
			imm32.lib ole32.lib uuid.lib shell32.lib
			comdlg32.lib winmm.lib comctl32.lib shlwapi.lib
			delayimp.lib advapi32.lib
		)
	endif()

	target_link_libraries(${JCPP_PROJECT_NAME}_shared
		PUBLIC ${JCPP_DEPENDENCY_LIBS}
		PRIVATE ${JCPP_EXT_LIBS}
	)

	jcpp_enable_bigobj(${JCPP_PROJECT_NAME}_shared)

	jcpp_encode_symbol(${JCPP_PROJECT_NAME}_shared)

	install(TARGETS ${JCPP_PROJECT_NAME}_shared
		LIBRARY DESTINATION "${JCPP_INSTALL_LIB_DIR}"
		ARCHIVE DESTINATION "${JCPP_INSTALL_LIB_DIR}"
		RUNTIME DESTINATION "${JCPP_INSTALL_BIN_DIR}"
	)
endif()

if(JCPP_OS MATCHES "windows")
	install(
		DIRECTORY "windows/include/"
		DESTINATION "${JCPP_INSTALL_INCLUDE_DIR}"
	)
endif()
if(INSTALL_TO_REPO AND JCPP_OS MATCHES "windows")
	install(
		FILES "windows/dependencies.txt"
		DESTINATION "${JCPP_INSTALL_DIR}"
	)
endif()
