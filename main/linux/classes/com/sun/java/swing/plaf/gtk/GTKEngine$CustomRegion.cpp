#include <com/sun/java/swing/plaf/gtk/GTKEngine$CustomRegion.h>

#include <com/sun/java/swing/plaf/gtk/GTKEngine.h>
#include <javax/swing/plaf/synth/Region.h>
#include <jcpp.h>

#undef TITLED_BORDER

using $GTKEngine = ::com::sun::java::swing::plaf::gtk::GTKEngine;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Region = ::javax::swing::plaf::synth::Region;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKEngine$CustomRegion_FieldInfo_[] = {
	{"TITLED_BORDER", "Ljavax/swing/plaf/synth/Region;", nullptr, $STATIC, $staticField(GTKEngine$CustomRegion, TITLED_BORDER)},
	{}
};

$MethodInfo _GTKEngine$CustomRegion_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(GTKEngine$CustomRegion::*)($String*)>(&GTKEngine$CustomRegion::init$))},
	{}
};

$InnerClassInfo _GTKEngine$CustomRegion_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKEngine$CustomRegion", "com.sun.java.swing.plaf.gtk.GTKEngine", "CustomRegion", $STATIC},
	{}
};

$ClassInfo _GTKEngine$CustomRegion_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKEngine$CustomRegion",
	"javax.swing.plaf.synth.Region",
	nullptr,
	_GTKEngine$CustomRegion_FieldInfo_,
	_GTKEngine$CustomRegion_MethodInfo_,
	nullptr,
	nullptr,
	_GTKEngine$CustomRegion_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKEngine"
};

$Object* allocate$GTKEngine$CustomRegion($Class* clazz) {
	return $of($alloc(GTKEngine$CustomRegion));
}

$Region* GTKEngine$CustomRegion::TITLED_BORDER = nullptr;

void GTKEngine$CustomRegion::init$($String* name) {
	$Region::init$(name, nullptr, false);
}

void clinit$GTKEngine$CustomRegion($Class* class$) {
	$assignStatic(GTKEngine$CustomRegion::TITLED_BORDER, $new(GTKEngine$CustomRegion, "TitledBorder"_s));
}

GTKEngine$CustomRegion::GTKEngine$CustomRegion() {
}

$Class* GTKEngine$CustomRegion::load$($String* name, bool initialize) {
	$loadClass(GTKEngine$CustomRegion, name, initialize, &_GTKEngine$CustomRegion_ClassInfo_, clinit$GTKEngine$CustomRegion, allocate$GTKEngine$CustomRegion);
	return class$;
}

$Class* GTKEngine$CustomRegion::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com