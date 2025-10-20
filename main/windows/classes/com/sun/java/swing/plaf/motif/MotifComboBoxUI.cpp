#include <com/sun/java/swing/plaf/motif/MotifComboBoxUI.h>

#include <com/sun/java/swing/plaf/motif/MotifComboBoxUI$ComboBoxLayoutManager.h>
#include <com/sun/java/swing/plaf/motif/MotifComboBoxUI$MotifComboBoxArrowIcon.h>
#include <com/sun/java/swing/plaf/motif/MotifComboBoxUI$MotifComboPopup.h>
#include <com/sun/java/swing/plaf/motif/MotifComboBoxUI$MotifPropertyChangeListener.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Rectangle.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/CellRendererPane.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI$ComboBoxLayoutManager.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI$PropertyChangeHandler.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <javax/swing/plaf/basic/ComboPopup.h>
#include <jcpp.h>

#undef HORIZ_MARGIN

using $MotifComboBoxUI$ComboBoxLayoutManager = ::com::sun::java::swing::plaf::motif::MotifComboBoxUI$ComboBoxLayoutManager;
using $MotifComboBoxUI$MotifComboBoxArrowIcon = ::com::sun::java::swing::plaf::motif::MotifComboBoxUI$MotifComboBoxArrowIcon;
using $MotifComboBoxUI$MotifComboPopup = ::com::sun::java::swing::plaf::motif::MotifComboBoxUI$MotifComboPopup;
using $MotifComboBoxUI$MotifPropertyChangeListener = ::com::sun::java::swing::plaf::motif::MotifComboBoxUI$MotifPropertyChangeListener;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Rectangle = ::java::awt::Rectangle;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CellRendererPane = ::javax::swing::CellRendererPane;
using $Icon = ::javax::swing::Icon;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $ComboBoxUI = ::javax::swing::plaf::ComboBoxUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;
using $BasicComboBoxUI$ComboBoxLayoutManager = ::javax::swing::plaf::basic::BasicComboBoxUI$ComboBoxLayoutManager;
using $BasicComboBoxUI$PropertyChangeHandler = ::javax::swing::plaf::basic::BasicComboBoxUI$PropertyChangeHandler;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;
using $ComboPopup = ::javax::swing::plaf::basic::ComboPopup;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifComboBoxUI_FieldInfo_[] = {
	{"arrowIcon", "Ljavax/swing/Icon;", nullptr, 0, $field(MotifComboBoxUI, arrowIcon)},
	{"HORIZ_MARGIN", "I", nullptr, $STATIC | $FINAL, $constField(MotifComboBoxUI, HORIZ_MARGIN)},
	{}
};

$MethodInfo _MotifComboBoxUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifComboBoxUI::*)()>(&MotifComboBoxUI::init$))},
	{"access$000", "(Lcom/sun/java/swing/plaf/motif/MotifComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(MotifComboBoxUI*)>(&MotifComboBoxUI::access$000))},
	{"configureEditor", "()V", nullptr, $PUBLIC},
	{"createLayoutManager", "()Ljava/awt/LayoutManager;", nullptr, $PROTECTED},
	{"createPopup", "()Ljavax/swing/plaf/basic/ComboPopup;", nullptr, $PROTECTED},
	{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MotifComboBoxUI::createUI))},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"iconAreaWidth", "()I", nullptr, $PUBLIC},
	{"installComponents", "()V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"motifGetEditor", "()Ljava/awt/Component;", nullptr, $PRIVATE, $method(static_cast<$Component*(MotifComboBoxUI::*)()>(&MotifComboBoxUI::motifGetEditor))},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintCurrentValue", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;Z)V", nullptr, $PUBLIC},
	{"rectangleForArrowIcon", "()Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"rectangleForCurrentValue", "()Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallComponents", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MotifComboBoxUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifPropertyChangeListener", "com.sun.java.swing.plaf.motif.MotifComboBoxUI", "MotifPropertyChangeListener", $PRIVATE},
	{"com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboBoxArrowIcon", "com.sun.java.swing.plaf.motif.MotifComboBoxUI", "MotifComboBoxArrowIcon", $STATIC},
	{"com.sun.java.swing.plaf.motif.MotifComboBoxUI$ComboBoxLayoutManager", "com.sun.java.swing.plaf.motif.MotifComboBoxUI", "ComboBoxLayoutManager", $PUBLIC},
	{"com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboPopup", "com.sun.java.swing.plaf.motif.MotifComboBoxUI", "MotifComboPopup", $PROTECTED},
	{}
};

$ClassInfo _MotifComboBoxUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifComboBoxUI",
	"javax.swing.plaf.basic.BasicComboBoxUI",
	"java.io.Serializable",
	_MotifComboBoxUI_FieldInfo_,
	_MotifComboBoxUI_MethodInfo_,
	nullptr,
	nullptr,
	_MotifComboBoxUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifPropertyChangeListener,com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboBoxArrowIcon,com.sun.java.swing.plaf.motif.MotifComboBoxUI$ComboBoxLayoutManager,com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboPopup,com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler,com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboPopup$1"
};

$Object* allocate$MotifComboBoxUI($Class* clazz) {
	return $of($alloc(MotifComboBoxUI));
}

int32_t MotifComboBoxUI::hashCode() {
	 return this->$BasicComboBoxUI::hashCode();
}

bool MotifComboBoxUI::equals(Object$* arg0) {
	 return this->$BasicComboBoxUI::equals(arg0);
}

$Object* MotifComboBoxUI::clone() {
	 return this->$BasicComboBoxUI::clone();
}

$String* MotifComboBoxUI::toString() {
	 return this->$BasicComboBoxUI::toString();
}

void MotifComboBoxUI::finalize() {
	this->$BasicComboBoxUI::finalize();
}

$JComboBox* MotifComboBoxUI::access$000(MotifComboBoxUI* x0) {
	$init(MotifComboBoxUI);
	return $nc(x0)->comboBox;
}

void MotifComboBoxUI::init$() {
	$BasicComboBoxUI::init$();
}

$ComponentUI* MotifComboBoxUI::createUI($JComponent* c) {
	$init(MotifComboBoxUI);
	return $new(MotifComboBoxUI);
}

void MotifComboBoxUI::installUI($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$BasicComboBoxUI::installUI(c);
	$var($Color, var$0, $UIManager::getColor("controlHighlight"_s));
	$var($Color, var$1, $UIManager::getColor("controlShadow"_s));
	$set(this, arrowIcon, $new($MotifComboBoxUI$MotifComboBoxArrowIcon, var$0, var$1, $($UIManager::getColor("control"_s))));
}

$Dimension* MotifComboBoxUI::getMinimumSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	if (!this->isMinimumSizeDirty) {
		return $new($Dimension, this->cachedMinimumSize);
	}
	$var($Dimension, size, nullptr);
	$var($Insets, insets, getInsets());
	$assign(size, getDisplaySize());
	$nc(size)->height += $nc(insets)->top + insets->bottom;
	int32_t buttonSize = iconAreaWidth();
	size->width += insets->left + insets->right + buttonSize;
	$nc(this->cachedMinimumSize)->setSize(size->width, size->height);
	this->isMinimumSizeDirty = false;
	return size;
}

$ComboPopup* MotifComboBoxUI::createPopup() {
	return $new($MotifComboBoxUI$MotifComboPopup, this, this->comboBox);
}

void MotifComboBoxUI::installComponents() {
	if ($nc(this->comboBox)->isEditable()) {
		addEditor();
	}
	$nc(this->comboBox)->add(static_cast<$Component*>(this->currentValuePane));
}

void MotifComboBoxUI::uninstallComponents() {
	removeEditor();
	$nc(this->comboBox)->removeAll();
}

void MotifComboBoxUI::paint($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	bool hasFocus = $nc(this->comboBox)->hasFocus();
	$var($Rectangle, r, nullptr);
	if ($nc(this->comboBox)->isEnabled()) {
		$nc(g)->setColor($($nc(this->comboBox)->getBackground()));
	} else {
		$nc(g)->setColor($($UIManager::getColor("ComboBox.disabledBackground"_s)));
	}
	int32_t var$0 = $nc(c)->getWidth();
	$nc(g)->fillRect(0, 0, var$0, c->getHeight());
	if (!$nc(this->comboBox)->isEditable()) {
		$assign(r, rectangleForCurrentValue());
		paintCurrentValue(g, r, hasFocus);
	}
	$assign(r, rectangleForArrowIcon());
	$nc(this->arrowIcon)->paintIcon(c, g, $nc(r)->x, r->y);
	if (!$nc(this->comboBox)->isEditable()) {
		$var($Border, border, $nc(this->comboBox)->getBorder());
		$var($Insets, in, nullptr);
		if (border != nullptr) {
			$assign(in, border->getBorderInsets(this->comboBox));
		} else {
			$assign(in, $new($Insets, 0, 0, 0, 0));
		}
		if ($nc($($nc(this->comboBox)->getComponentOrientation()))->isLeftToRight()) {
			$nc(r)->x -= (MotifComboBoxUI::HORIZ_MARGIN + 2);
		} else {
			$nc(r)->x += r->width + MotifComboBoxUI::HORIZ_MARGIN + 1;
		}
		$nc(r)->y = $nc(in)->top;
		r->width = 1;
		r->height = $nc($($nc(this->comboBox)->getBounds()))->height - in->bottom - in->top;
		g->setColor($($UIManager::getColor("controlShadow"_s)));
		g->fillRect(r->x, r->y, r->width, r->height);
		++r->x;
		g->setColor($($UIManager::getColor("controlHighlight"_s)));
		g->fillRect(r->x, r->y, r->width, r->height);
	}
	$nc(this->currentValuePane)->removeAll();
}

void MotifComboBoxUI::paintCurrentValue($Graphics* g, $Rectangle* bounds, bool hasFocus) {
	$useLocalCurrentObjectStackCache();
	$var($ListCellRenderer, renderer, $nc(this->comboBox)->getRenderer());
	$var($Component, c, nullptr);
	$var($Dimension, d, nullptr);
	$assign(c, $nc(renderer)->getListCellRendererComponent(this->listBox, $($nc(this->comboBox)->getSelectedItem()), -1, false, false));
	$nc(c)->setFont($($nc(this->comboBox)->getFont()));
	if ($nc(this->comboBox)->isEnabled()) {
		c->setForeground($($nc(this->comboBox)->getForeground()));
		c->setBackground($($nc(this->comboBox)->getBackground()));
	} else {
		c->setForeground($($UIManager::getColor("ComboBox.disabledForeground"_s)));
		c->setBackground($($UIManager::getColor("ComboBox.disabledBackground"_s)));
	}
	$assign(d, c->getPreferredSize());
	$nc(this->currentValuePane)->paintComponent(g, c, this->comboBox, $nc(bounds)->x, bounds->y, bounds->width, $nc(d)->height);
}

$Rectangle* MotifComboBoxUI::rectangleForArrowIcon() {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, b, $nc(this->comboBox)->getBounds());
	$var($Border, border, $nc(this->comboBox)->getBorder());
	$var($Insets, in, nullptr);
	if (border != nullptr) {
		$assign(in, border->getBorderInsets(this->comboBox));
	} else {
		$assign(in, $new($Insets, 0, 0, 0, 0));
	}
	$nc(b)->x = $nc(in)->left;
	b->y = in->top;
	b->width -= (in->left + in->right);
	b->height -= (in->top + in->bottom);
	if ($nc($($nc(this->comboBox)->getComponentOrientation()))->isLeftToRight()) {
		b->x = b->x + b->width - MotifComboBoxUI::HORIZ_MARGIN - $nc(this->arrowIcon)->getIconWidth();
	} else {
		b->x += MotifComboBoxUI::HORIZ_MARGIN;
	}
	b->y = b->y + (b->height - $nc(this->arrowIcon)->getIconHeight()) / 2;
	b->width = $nc(this->arrowIcon)->getIconWidth();
	b->height = $nc(this->arrowIcon)->getIconHeight();
	return b;
}

$Rectangle* MotifComboBoxUI::rectangleForCurrentValue() {
	$useLocalCurrentObjectStackCache();
	int32_t width = $nc(this->comboBox)->getWidth();
	int32_t height = $nc(this->comboBox)->getHeight();
	$var($Insets, insets, getInsets());
	if ($nc($($nc(this->comboBox)->getComponentOrientation()))->isLeftToRight()) {
		return $new($Rectangle, $nc(insets)->left, insets->top, (width - (insets->left + insets->right)) - iconAreaWidth(), height - (insets->top + insets->bottom));
	} else {
		int32_t var$0 = $nc(insets)->left + iconAreaWidth();
		int32_t var$1 = insets->top;
		return $new($Rectangle, var$0, var$1, (width - (insets->left + insets->right)) - iconAreaWidth(), height - (insets->top + insets->bottom));
	}
}

int32_t MotifComboBoxUI::iconAreaWidth() {
	if ($nc(this->comboBox)->isEditable()) {
		return $nc(this->arrowIcon)->getIconWidth() + (2 * MotifComboBoxUI::HORIZ_MARGIN);
	} else {
		return $nc(this->arrowIcon)->getIconWidth() + (3 * MotifComboBoxUI::HORIZ_MARGIN) + 2;
	}
}

void MotifComboBoxUI::configureEditor() {
	$BasicComboBoxUI::configureEditor();
	$nc(this->editor)->setBackground($($UIManager::getColor("text"_s)));
}

$LayoutManager* MotifComboBoxUI::createLayoutManager() {
	return $new($MotifComboBoxUI$ComboBoxLayoutManager, this);
}

$Component* MotifComboBoxUI::motifGetEditor() {
	return this->editor;
}

$PropertyChangeListener* MotifComboBoxUI::createPropertyChangeListener() {
	return $new($MotifComboBoxUI$MotifPropertyChangeListener, this);
}

MotifComboBoxUI::MotifComboBoxUI() {
}

$Class* MotifComboBoxUI::load$($String* name, bool initialize) {
	$loadClass(MotifComboBoxUI, name, initialize, &_MotifComboBoxUI_ClassInfo_, allocate$MotifComboBoxUI);
	return class$;
}

$Class* MotifComboBoxUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com