#include <java/awt/im/spi/InputMethodContext.h>

#include <java/awt/Window.h>
#include <java/awt/font/TextHitInfo.h>
#include <java/awt/im/spi/InputMethod.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/AttributedCharacterIterator.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $Window = ::java::awt::Window;
using $TextHitInfo = ::java::awt::font::TextHitInfo;
using $InputMethodRequests = ::java::awt::im::InputMethodRequests;
using $InputMethod = ::java::awt::im::spi::InputMethod;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $JFrame = ::javax::swing::JFrame;

namespace java {
	namespace awt {
		namespace im {
			namespace spi {

$MethodInfo _InputMethodContext_MethodInfo_[] = {
	{"createInputMethodJFrame", "(Ljava/lang/String;Z)Ljavax/swing/JFrame;", nullptr, $PUBLIC | $ABSTRACT},
	{"createInputMethodWindow", "(Ljava/lang/String;Z)Ljava/awt/Window;", nullptr, $PUBLIC | $ABSTRACT},
	{"dispatchInputMethodEvent", "(ILjava/text/AttributedCharacterIterator;ILjava/awt/font/TextHitInfo;Ljava/awt/font/TextHitInfo;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"enableClientWindowNotification", "(Ljava/awt/im/spi/InputMethod;Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _InputMethodContext_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.im.spi.InputMethodContext",
	nullptr,
	"java.awt.im.InputMethodRequests",
	nullptr,
	_InputMethodContext_MethodInfo_
};

$Object* allocate$InputMethodContext($Class* clazz) {
	return $of($alloc(InputMethodContext));
}

$Class* InputMethodContext::load$($String* name, bool initialize) {
	$loadClass(InputMethodContext, name, initialize, &_InputMethodContext_ClassInfo_, allocate$InputMethodContext);
	return class$;
}

$Class* InputMethodContext::class$ = nullptr;

			} // spi
		} // im
	} // awt
} // java