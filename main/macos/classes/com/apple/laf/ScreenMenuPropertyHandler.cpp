#include <com/apple/laf/ScreenMenuPropertyHandler.h>

#include <java/awt/Font.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/KeyStroke.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _ScreenMenuPropertyHandler_MethodInfo_[] = {
	{"setAccelerator", "(Ljavax/swing/KeyStroke;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setChildVisible", "(Ljavax/swing/JMenuItem;Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setIcon", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setIndeterminate", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setToolTipText", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ScreenMenuPropertyHandler_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.apple.laf.ScreenMenuPropertyHandler",
	nullptr,
	nullptr,
	nullptr,
	_ScreenMenuPropertyHandler_MethodInfo_
};

$Object* allocate$ScreenMenuPropertyHandler($Class* clazz) {
	return $of($alloc(ScreenMenuPropertyHandler));
}

$Class* ScreenMenuPropertyHandler::load$($String* name, bool initialize) {
	$loadClass(ScreenMenuPropertyHandler, name, initialize, &_ScreenMenuPropertyHandler_ClassInfo_, allocate$ScreenMenuPropertyHandler);
	return class$;
}

$Class* ScreenMenuPropertyHandler::class$ = nullptr;

		} // laf
	} // apple
} // com