#include <com/apple/laf/AquaMnemonicHandler$AltProcessor.h>

#include <com/apple/laf/AquaMnemonicHandler.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef KEY_PRESSED
#undef KEY_RELEASED
#undef VK_ALT

using $AquaMnemonicHandler = ::com::apple::laf::AquaMnemonicHandler;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JRootPane = ::javax::swing::JRootPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaMnemonicHandler$AltProcessor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaMnemonicHandler$AltProcessor::*)()>(&AquaMnemonicHandler$AltProcessor::init$))},
	{"postProcessKeyEvent", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaMnemonicHandler$AltProcessor_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaMnemonicHandler$AltProcessor", "com.apple.laf.AquaMnemonicHandler", "AltProcessor", $STATIC},
	{}
};

$ClassInfo _AquaMnemonicHandler$AltProcessor_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaMnemonicHandler$AltProcessor",
	"java.lang.Object",
	"java.awt.KeyEventPostProcessor",
	nullptr,
	_AquaMnemonicHandler$AltProcessor_MethodInfo_,
	nullptr,
	nullptr,
	_AquaMnemonicHandler$AltProcessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaMnemonicHandler"
};

$Object* allocate$AquaMnemonicHandler$AltProcessor($Class* clazz) {
	return $of($alloc(AquaMnemonicHandler$AltProcessor));
}

void AquaMnemonicHandler$AltProcessor::init$() {
}

bool AquaMnemonicHandler$AltProcessor::postProcessKeyEvent($KeyEvent* ev) {
	$useLocalCurrentObjectStackCache();
	if ($nc(ev)->getKeyCode() != $KeyEvent::VK_ALT) {
		return false;
	}
	$var($JRootPane, root, $SwingUtilities::getRootPane($($nc(ev)->getComponent())));
	$var($Window, winAncestor, root == nullptr ? ($Window*)nullptr : $SwingUtilities::getWindowAncestor(root));
	switch ($nc(ev)->getID()) {
	case $KeyEvent::KEY_PRESSED:
		{
			$AquaMnemonicHandler::setMnemonicHidden(false);
			break;
		}
	case $KeyEvent::KEY_RELEASED:
		{
			$AquaMnemonicHandler::setMnemonicHidden(true);
			break;
		}
	}
	$AquaMnemonicHandler::repaintMnemonicsInWindow(winAncestor);
	return false;
}

AquaMnemonicHandler$AltProcessor::AquaMnemonicHandler$AltProcessor() {
}

$Class* AquaMnemonicHandler$AltProcessor::load$($String* name, bool initialize) {
	$loadClass(AquaMnemonicHandler$AltProcessor, name, initialize, &_AquaMnemonicHandler$AltProcessor_ClassInfo_, allocate$AquaMnemonicHandler$AltProcessor);
	return class$;
}

$Class* AquaMnemonicHandler$AltProcessor::class$ = nullptr;

		} // laf
	} // apple
} // com