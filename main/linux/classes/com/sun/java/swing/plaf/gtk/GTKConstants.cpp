#include <com/sun/java/swing/plaf/gtk/GTKConstants.h>

#include <jcpp.h>

#undef UNDEFINED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKConstants_FieldInfo_[] = {
	{"UNDEFINED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GTKConstants, UNDEFINED)},
	{}
};

$InnerClassInfo _GTKConstants_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKConstants$Orientation", "com.sun.java.swing.plaf.gtk.GTKConstants", "Orientation", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.java.swing.plaf.gtk.GTKConstants$ArrowType", "com.sun.java.swing.plaf.gtk.GTKConstants", "ArrowType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.java.swing.plaf.gtk.GTKConstants$PositionType", "com.sun.java.swing.plaf.gtk.GTKConstants", "PositionType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.java.swing.plaf.gtk.GTKConstants$ExpanderStyle", "com.sun.java.swing.plaf.gtk.GTKConstants", "ExpanderStyle", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.java.swing.plaf.gtk.GTKConstants$StateType", "com.sun.java.swing.plaf.gtk.GTKConstants", "StateType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.java.swing.plaf.gtk.GTKConstants$ShadowType", "com.sun.java.swing.plaf.gtk.GTKConstants", "ShadowType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.java.swing.plaf.gtk.GTKConstants$TextDirection", "com.sun.java.swing.plaf.gtk.GTKConstants", "TextDirection", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.java.swing.plaf.gtk.GTKConstants$IconSize", "com.sun.java.swing.plaf.gtk.GTKConstants", "IconSize", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _GTKConstants_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.java.swing.plaf.gtk.GTKConstants",
	nullptr,
	nullptr,
	_GTKConstants_FieldInfo_,
	nullptr,
	nullptr,
	nullptr,
	_GTKConstants_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKConstants$Orientation,com.sun.java.swing.plaf.gtk.GTKConstants$ArrowType,com.sun.java.swing.plaf.gtk.GTKConstants$PositionType,com.sun.java.swing.plaf.gtk.GTKConstants$ExpanderStyle,com.sun.java.swing.plaf.gtk.GTKConstants$StateType,com.sun.java.swing.plaf.gtk.GTKConstants$ShadowType,com.sun.java.swing.plaf.gtk.GTKConstants$TextDirection,com.sun.java.swing.plaf.gtk.GTKConstants$IconSize"
};

$Object* allocate$GTKConstants($Class* clazz) {
	return $of($alloc(GTKConstants));
}

$Class* GTKConstants::load$($String* name, bool initialize) {
	$loadClass(GTKConstants, name, initialize, &_GTKConstants_ClassInfo_, allocate$GTKConstants);
	return class$;
}

$Class* GTKConstants::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com