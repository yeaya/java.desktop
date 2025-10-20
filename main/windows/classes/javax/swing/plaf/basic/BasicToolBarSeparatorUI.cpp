#include <javax/swing/plaf/basic/BasicToolBarSeparatorUI.h>

#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/JToolBar$Separator.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SeparatorUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicSeparatorUI.h>
#include <jcpp.h>

#undef HORIZONTAL

using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JSeparator = ::javax::swing::JSeparator;
using $JToolBar$Separator = ::javax::swing::JToolBar$Separator;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SeparatorUI = ::javax::swing::plaf::SeparatorUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicSeparatorUI = ::javax::swing::plaf::basic::BasicSeparatorUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicToolBarSeparatorUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicToolBarSeparatorUI::*)()>(&BasicToolBarSeparatorUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicToolBarSeparatorUI::createUI))},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"installDefaults", "(Ljavax/swing/JSeparator;)V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BasicToolBarSeparatorUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicToolBarSeparatorUI",
	"javax.swing.plaf.basic.BasicSeparatorUI",
	nullptr,
	nullptr,
	_BasicToolBarSeparatorUI_MethodInfo_
};

$Object* allocate$BasicToolBarSeparatorUI($Class* clazz) {
	return $of($alloc(BasicToolBarSeparatorUI));
}

void BasicToolBarSeparatorUI::init$() {
	$BasicSeparatorUI::init$();
}

$ComponentUI* BasicToolBarSeparatorUI::createUI($JComponent* c) {
	$init(BasicToolBarSeparatorUI);
	return $new(BasicToolBarSeparatorUI);
}

void BasicToolBarSeparatorUI::installDefaults($JSeparator* s) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, size, $nc(($cast($JToolBar$Separator, s)))->getSeparatorSize());
	if (size == nullptr || $instanceOf($UIResource, size)) {
		$var($JToolBar$Separator, sep, $cast($JToolBar$Separator, s));
		$assign(size, ($cast($Dimension, $UIManager::get("ToolBar.separatorSize"_s))));
		if (size != nullptr) {
			if ($nc(sep)->getOrientation() == $JSeparator::HORIZONTAL) {
				$assign(size, $new($Dimension, size->height, size->width));
			}
			$nc(sep)->setSeparatorSize(size);
		}
	}
}

void BasicToolBarSeparatorUI::paint($Graphics* g, $JComponent* c) {
}

$Dimension* BasicToolBarSeparatorUI::getPreferredSize($JComponent* c) {
	$var($Dimension, size, $nc(($cast($JToolBar$Separator, c)))->getSeparatorSize());
	if (size != nullptr) {
		return size->getSize();
	} else {
		return nullptr;
	}
}

BasicToolBarSeparatorUI::BasicToolBarSeparatorUI() {
}

$Class* BasicToolBarSeparatorUI::load$($String* name, bool initialize) {
	$loadClass(BasicToolBarSeparatorUI, name, initialize, &_BasicToolBarSeparatorUI_ClassInfo_, allocate$BasicToolBarSeparatorUI);
	return class$;
}

$Class* BasicToolBarSeparatorUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax