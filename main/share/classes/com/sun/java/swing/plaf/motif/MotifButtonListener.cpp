#include <com/sun/java/swing/plaf/motif/MotifButtonListener.h>

#include <javax/swing/AbstractButton.h>
#include <javax/swing/plaf/basic/BasicButtonListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $BasicButtonListener = ::javax::swing::plaf::basic::BasicButtonListener;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$MethodInfo _MotifButtonListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/AbstractButton;)V", nullptr, $PUBLIC, $method(static_cast<void(MotifButtonListener::*)($AbstractButton*)>(&MotifButtonListener::init$))},
	{"checkOpacity", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _MotifButtonListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifButtonListener",
	"javax.swing.plaf.basic.BasicButtonListener",
	nullptr,
	nullptr,
	_MotifButtonListener_MethodInfo_
};

$Object* allocate$MotifButtonListener($Class* clazz) {
	return $of($alloc(MotifButtonListener));
}

void MotifButtonListener::init$($AbstractButton* b) {
	$BasicButtonListener::init$(b);
}

void MotifButtonListener::checkOpacity($AbstractButton* b) {
	$nc(b)->setOpaque(false);
}

MotifButtonListener::MotifButtonListener() {
}

$Class* MotifButtonListener::load$($String* name, bool initialize) {
	$loadClass(MotifButtonListener, name, initialize, &_MotifButtonListener_ClassInfo_, allocate$MotifButtonListener);
	return class$;
}

$Class* MotifButtonListener::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com