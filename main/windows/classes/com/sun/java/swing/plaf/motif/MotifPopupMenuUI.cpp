#include <com/sun/java/swing/plaf/motif/MotifPopupMenuUI.h>

#include <com/sun/java/swing/plaf/motif/MotifPopupMenuUI$1.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/PopupMenuUI.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef BUTTON3_MASK
#undef MOUSE_PRESSED

using $MotifPopupMenuUI$1 = ::com::sun::java::swing::plaf::motif::MotifPopupMenuUI$1;
using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $PopupMenuUI = ::javax::swing::plaf::PopupMenuUI;
using $BasicPopupMenuUI = ::javax::swing::plaf::basic::BasicPopupMenuUI;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifPopupMenuUI_FieldInfo_[] = {
	{"border", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC, $staticField(MotifPopupMenuUI, border)},
	{"titleFont", "Ljava/awt/Font;", nullptr, $PRIVATE, $field(MotifPopupMenuUI, titleFont)},
	{}
};

$MethodInfo _MotifPopupMenuUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifPopupMenuUI::*)()>(&MotifPopupMenuUI::init$))},
	{"createChangeListener", "(Ljavax/swing/JPopupMenu;)Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MotifPopupMenuUI::createUI))},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"isPopupTrigger", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifPopupMenuUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifPopupMenuUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifPopupMenuUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifPopupMenuUI",
	"javax.swing.plaf.basic.BasicPopupMenuUI",
	nullptr,
	_MotifPopupMenuUI_FieldInfo_,
	_MotifPopupMenuUI_MethodInfo_,
	nullptr,
	nullptr,
	_MotifPopupMenuUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifPopupMenuUI$1"
};

$Object* allocate$MotifPopupMenuUI($Class* clazz) {
	return $of($alloc(MotifPopupMenuUI));
}

$Border* MotifPopupMenuUI::border = nullptr;

void MotifPopupMenuUI::init$() {
	$BasicPopupMenuUI::init$();
	$set(this, titleFont, nullptr);
}

$ComponentUI* MotifPopupMenuUI::createUI($JComponent* x) {
	$init(MotifPopupMenuUI);
	return $new(MotifPopupMenuUI);
}

$Dimension* MotifPopupMenuUI::getPreferredSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($LayoutManager, layout, $nc(c)->getLayout());
	$var($Dimension, d, $nc(layout)->preferredLayoutSize(c));
	$var($String, title, $nc(($cast($JPopupMenu, c)))->getLabel());
	if (this->titleFont == nullptr) {
		$var($UIDefaults, table, $UIManager::getLookAndFeelDefaults());
		$set(this, titleFont, $nc(table)->getFont("PopupMenu.font"_s));
	}
	$var($FontMetrics, fm, c->getFontMetrics(this->titleFont));
	int32_t stringWidth = 0;
	if (title != nullptr) {
		stringWidth += $SwingUtilities2::stringWidth(c, fm, title);
	}
	if ($nc(d)->width < stringWidth) {
		d->width = stringWidth + 8;
		$var($Insets, i, c->getInsets());
		if (i != nullptr) {
			d->width += i->left + i->right;
		}
		if (MotifPopupMenuUI::border != nullptr) {
			$assign(i, $nc(MotifPopupMenuUI::border)->getBorderInsets(c));
			d->width += $nc(i)->left + i->right;
		}
		return d;
	}
	return nullptr;
}

$ChangeListener* MotifPopupMenuUI::createChangeListener($JPopupMenu* m) {
	return $new($MotifPopupMenuUI$1, this);
}

bool MotifPopupMenuUI::isPopupTrigger($MouseEvent* e) {
	bool var$0 = ($nc(e)->getID() == $MouseEvent::MOUSE_PRESSED);
	return (var$0 && (((int32_t)(e->getModifiers() & (uint32_t)$MouseEvent::BUTTON3_MASK)) != 0));
}

void clinit$MotifPopupMenuUI($Class* class$) {
	$assignStatic(MotifPopupMenuUI::border, nullptr);
}

MotifPopupMenuUI::MotifPopupMenuUI() {
}

$Class* MotifPopupMenuUI::load$($String* name, bool initialize) {
	$loadClass(MotifPopupMenuUI, name, initialize, &_MotifPopupMenuUI_ClassInfo_, clinit$MotifPopupMenuUI, allocate$MotifPopupMenuUI);
	return class$;
}

$Class* MotifPopupMenuUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com