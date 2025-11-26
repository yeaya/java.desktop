#include <com/sun/java/swing/plaf/gtk/GTKRegion.h>

#include <javax/swing/plaf/synth/Region.h>
#include <jcpp.h>

#undef HANDLE_BOX

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Region = ::javax::swing::plaf::synth::Region;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKRegion_FieldInfo_[] = {
	{"HANDLE_BOX", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(GTKRegion, HANDLE_BOX)},
	{}
};

$MethodInfo _GTKRegion_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PROTECTED, $method(static_cast<void(GTKRegion::*)($String*,$String*,bool)>(&GTKRegion::init$))},
	{}
};

$ClassInfo _GTKRegion_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKRegion",
	"javax.swing.plaf.synth.Region",
	nullptr,
	_GTKRegion_FieldInfo_,
	_GTKRegion_MethodInfo_
};

$Object* allocate$GTKRegion($Class* clazz) {
	return $of($alloc(GTKRegion));
}

$Region* GTKRegion::HANDLE_BOX = nullptr;

void GTKRegion::init$($String* name, $String* ui, bool subregion) {
	$Region::init$(name, ui, subregion);
}

void clinit$GTKRegion($Class* class$) {
	$assignStatic(GTKRegion::HANDLE_BOX, $new(GTKRegion, "HandleBox"_s, nullptr, true));
}

GTKRegion::GTKRegion() {
}

$Class* GTKRegion::load$($String* name, bool initialize) {
	$loadClass(GTKRegion, name, initialize, &_GTKRegion_ClassInfo_, clinit$GTKRegion, allocate$GTKRegion);
	return class$;
}

$Class* GTKRegion::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com