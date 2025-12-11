#include <com/apple/laf/AquaMnemonicHandler.h>

#include <com/apple/laf/AquaMnemonicHandler$AltProcessor.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/KeyEventPostProcessor.h>
#include <java/awt/Window.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $WindowArray = $Array<::java::awt::Window>;
using $AquaMnemonicHandler$AltProcessor = ::com::apple::laf::AquaMnemonicHandler$AltProcessor;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $KeyEventPostProcessor = ::java::awt::KeyEventPostProcessor;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JLabel = ::javax::swing::JLabel;
using $UIManager = ::javax::swing::UIManager;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaMnemonicHandler_FieldInfo_[] = {
	{"altProcessor", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaMnemonicHandler$AltProcessor;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaMnemonicHandler, altProcessor)},
	{"isMnemonicHidden", "Z", nullptr, $PROTECTED | $STATIC, $staticField(AquaMnemonicHandler, isMnemonicHidden$)},
	{}
};

$MethodInfo _AquaMnemonicHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaMnemonicHandler::*)()>(&AquaMnemonicHandler::init$))},
	{"getInstance", "()Ljava/awt/KeyEventPostProcessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$KeyEventPostProcessor*(*)()>(&AquaMnemonicHandler::getInstance))},
	{"isMnemonicHidden", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&AquaMnemonicHandler::isMnemonicHidden))},
	{"repaintMnemonicsInContainer", "(Ljava/awt/Container;)V", nullptr, $STATIC, $method(static_cast<void(*)($Container*)>(&AquaMnemonicHandler::repaintMnemonicsInContainer))},
	{"repaintMnemonicsInWindow", "(Ljava/awt/Window;)V", nullptr, $STATIC, $method(static_cast<void(*)($Window*)>(&AquaMnemonicHandler::repaintMnemonicsInWindow))},
	{"setMnemonicHidden", "(Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(bool)>(&AquaMnemonicHandler::setMnemonicHidden))},
	{}
};

$InnerClassInfo _AquaMnemonicHandler_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaMnemonicHandler$AltProcessor", "com.apple.laf.AquaMnemonicHandler", "AltProcessor", $STATIC},
	{}
};

$ClassInfo _AquaMnemonicHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaMnemonicHandler",
	"java.lang.Object",
	nullptr,
	_AquaMnemonicHandler_FieldInfo_,
	_AquaMnemonicHandler_MethodInfo_,
	nullptr,
	nullptr,
	_AquaMnemonicHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaMnemonicHandler$AltProcessor"
};

$Object* allocate$AquaMnemonicHandler($Class* clazz) {
	return $of($alloc(AquaMnemonicHandler));
}

$AquaUtils$RecyclableSingleton* AquaMnemonicHandler::altProcessor = nullptr;
bool AquaMnemonicHandler::isMnemonicHidden$ = false;

void AquaMnemonicHandler::init$() {
}

$KeyEventPostProcessor* AquaMnemonicHandler::getInstance() {
	$init(AquaMnemonicHandler);
	return $cast($KeyEventPostProcessor, $nc(AquaMnemonicHandler::altProcessor)->get());
}

void AquaMnemonicHandler::setMnemonicHidden(bool hide) {
	$init(AquaMnemonicHandler);
	if ($UIManager::getBoolean("Button.showMnemonics"_s)) {
		AquaMnemonicHandler::isMnemonicHidden$ = false;
	} else {
		AquaMnemonicHandler::isMnemonicHidden$ = hide;
	}
}

bool AquaMnemonicHandler::isMnemonicHidden() {
	$init(AquaMnemonicHandler);
	if ($UIManager::getBoolean("Button.showMnemonics"_s)) {
		AquaMnemonicHandler::isMnemonicHidden$ = false;
	}
	return AquaMnemonicHandler::isMnemonicHidden$;
}

void AquaMnemonicHandler::repaintMnemonicsInWindow($Window* w) {
	$init(AquaMnemonicHandler);
	$useLocalCurrentObjectStackCache();
	if (w == nullptr || !$nc(w)->isShowing()) {
		return;
	}
	$var($WindowArray, ownedWindows, $nc(w)->getOwnedWindows());
	{
		$var($WindowArray, arr$, ownedWindows);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Window, element, arr$->get(i$));
			{
				repaintMnemonicsInWindow(element);
			}
		}
	}
	repaintMnemonicsInContainer(w);
}

void AquaMnemonicHandler::repaintMnemonicsInContainer($Container* cont) {
	$init(AquaMnemonicHandler);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(cont)->getComponentCount(); ++i) {
		$var($Component, c, cont->getComponent(i));
		if (c == nullptr || !$nc(c)->isVisible()) {
			continue;
		}
		if ($instanceOf($AbstractButton, c) && $nc(($cast($AbstractButton, c)))->getMnemonic() != u'\0') {
			$nc(c)->repaint();
			continue;
		}
		if ($instanceOf($JLabel, c) && $nc(($cast($JLabel, c)))->getDisplayedMnemonic() != u'\0') {
			$nc(c)->repaint();
			continue;
		}
		if ($instanceOf($Container, c)) {
			repaintMnemonicsInContainer($cast($Container, c));
		}
	}
}

void clinit$AquaMnemonicHandler($Class* class$) {
	$load($AquaMnemonicHandler$AltProcessor);
	$assignStatic(AquaMnemonicHandler::altProcessor, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, $AquaMnemonicHandler$AltProcessor::class$));
	AquaMnemonicHandler::isMnemonicHidden$ = true;
}

AquaMnemonicHandler::AquaMnemonicHandler() {
}

$Class* AquaMnemonicHandler::load$($String* name, bool initialize) {
	$loadClass(AquaMnemonicHandler, name, initialize, &_AquaMnemonicHandler_ClassInfo_, clinit$AquaMnemonicHandler, allocate$AquaMnemonicHandler);
	return class$;
}

$Class* AquaMnemonicHandler::class$ = nullptr;

		} // laf
	} // apple
} // com