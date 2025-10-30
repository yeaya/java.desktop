#include <javax/swing/DefaultListCellRenderer.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/Rectangle.h>
#include <java/lang/SecurityManager.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList$DropLocation.h>
#include <javax/swing/JList.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <sun/swing/DefaultLookup.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef DEFAULT_NO_FOCUS_BORDER
#undef SAFE_NO_FOCUS_BORDER

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JList = ::javax::swing::JList;
using $JList$DropLocation = ::javax::swing::JList$DropLocation;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $DefaultLookup = ::sun::swing::DefaultLookup;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {

$FieldInfo _DefaultListCellRenderer_FieldInfo_[] = {
	{"SAFE_NO_FOCUS_BORDER", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultListCellRenderer, SAFE_NO_FOCUS_BORDER)},
	{"DEFAULT_NO_FOCUS_BORDER", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultListCellRenderer, DEFAULT_NO_FOCUS_BORDER)},
	{"noFocusBorder", "Ljavax/swing/border/Border;", nullptr, $PROTECTED | $STATIC, $staticField(DefaultListCellRenderer, noFocusBorder)},
	{}
};

$MethodInfo _DefaultListCellRenderer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultListCellRenderer::*)()>(&DefaultListCellRenderer::init$))},
	{"firePropertyChange", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"firePropertyChange", "(Ljava/lang/String;BB)V", nullptr, $PUBLIC},
	{"firePropertyChange", "(Ljava/lang/String;CC)V", nullptr, $PUBLIC},
	{"firePropertyChange", "(Ljava/lang/String;SS)V", nullptr, $PUBLIC},
	{"firePropertyChange", "(Ljava/lang/String;II)V", nullptr, $PUBLIC},
	{"firePropertyChange", "(Ljava/lang/String;JJ)V", nullptr, $PUBLIC},
	{"firePropertyChange", "(Ljava/lang/String;FF)V", nullptr, $PUBLIC},
	{"firePropertyChange", "(Ljava/lang/String;DD)V", nullptr, $PUBLIC},
	{"firePropertyChange", "(Ljava/lang/String;ZZ)V", nullptr, $PUBLIC},
	{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<*>;Ljava/lang/Object;IZZ)Ljava/awt/Component;", $PUBLIC},
	{"getNoFocusBorder", "()Ljavax/swing/border/Border;", nullptr, $PRIVATE, $method(static_cast<$Border*(DefaultListCellRenderer::*)()>(&DefaultListCellRenderer::getNoFocusBorder))},
	{"invalidate", "()V", nullptr, $PUBLIC},
	{"isOpaque", "()Z", nullptr, $PUBLIC},
	{"repaint", "()V", nullptr, $PUBLIC},
	{"repaint", "(JIIII)V", nullptr, $PUBLIC},
	{"repaint", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"revalidate", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validate", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultListCellRenderer_InnerClassesInfo_[] = {
	{"javax.swing.DefaultListCellRenderer$UIResource", "javax.swing.DefaultListCellRenderer", "UIResource", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DefaultListCellRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.DefaultListCellRenderer",
	"javax.swing.JLabel",
	"javax.swing.ListCellRenderer",
	_DefaultListCellRenderer_FieldInfo_,
	_DefaultListCellRenderer_MethodInfo_,
	"Ljavax/swing/JLabel;Ljavax/swing/ListCellRenderer<Ljava/lang/Object;>;Ljava/io/Serializable;",
	nullptr,
	_DefaultListCellRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.DefaultListCellRenderer$UIResource"
};

$Object* allocate$DefaultListCellRenderer($Class* clazz) {
	return $of($alloc(DefaultListCellRenderer));
}

$String* DefaultListCellRenderer::toString() {
	 return this->$JLabel::toString();
}

int32_t DefaultListCellRenderer::hashCode() {
	 return this->$JLabel::hashCode();
}

bool DefaultListCellRenderer::equals(Object$* arg0) {
	 return this->$JLabel::equals(arg0);
}

$Object* DefaultListCellRenderer::clone() {
	 return this->$JLabel::clone();
}

void DefaultListCellRenderer::finalize() {
	this->$JLabel::finalize();
}

$Border* DefaultListCellRenderer::SAFE_NO_FOCUS_BORDER = nullptr;
$Border* DefaultListCellRenderer::DEFAULT_NO_FOCUS_BORDER = nullptr;
$Border* DefaultListCellRenderer::noFocusBorder = nullptr;

void DefaultListCellRenderer::init$() {
	$JLabel::init$();
	setOpaque(true);
	setBorder($(getNoFocusBorder()));
	setName("List.cellRenderer"_s);
}

$Border* DefaultListCellRenderer::getNoFocusBorder() {
	$var($Border, border, $DefaultLookup::getBorder(this, this->ui, "List.cellNoFocusBorder"_s));
	if ($System::getSecurityManager() != nullptr) {
		if (border != nullptr) {
			return border;
		}
		return DefaultListCellRenderer::SAFE_NO_FOCUS_BORDER;
	} else {
		if (border != nullptr && (DefaultListCellRenderer::noFocusBorder == nullptr || DefaultListCellRenderer::noFocusBorder == DefaultListCellRenderer::DEFAULT_NO_FOCUS_BORDER)) {
			return border;
		}
		return DefaultListCellRenderer::noFocusBorder;
	}
}

$Component* DefaultListCellRenderer::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
	$useLocalCurrentObjectStackCache();
	setComponentOrientation($($nc(list)->getComponentOrientation()));
	$var($Color, bg, nullptr);
	$var($Color, fg, nullptr);
	$var($JList$DropLocation, dropLocation, $nc(list)->getDropLocation());
	bool var$0 = dropLocation != nullptr && !dropLocation->isInsert();
	if (var$0 && dropLocation->getIndex() == index) {
		$assign(bg, $DefaultLookup::getColor(this, this->ui, "List.dropCellBackground"_s));
		$assign(fg, $DefaultLookup::getColor(this, this->ui, "List.dropCellForeground"_s));
		isSelected = true;
	}
	if (isSelected) {
		setBackground(bg == nullptr ? $(list->getSelectionBackground()) : bg);
		setForeground(fg == nullptr ? $(list->getSelectionForeground()) : fg);
	} else {
		setBackground($(list->getBackground()));
		setForeground($(list->getForeground()));
	}
	if ($instanceOf($Icon, value)) {
		setIcon($cast($Icon, value));
		setText(""_s);
	} else {
		setIcon(nullptr);
		setText((value == nullptr) ? ""_s : $($nc($of(value))->toString()));
	}
	setEnabled(list->isEnabled());
	setFont($(list->getFont()));
	$var($Border, border, nullptr);
	if (cellHasFocus) {
		if (isSelected) {
			$assign(border, $DefaultLookup::getBorder(this, this->ui, "List.focusSelectedCellHighlightBorder"_s));
		}
		if (border == nullptr) {
			$assign(border, $DefaultLookup::getBorder(this, this->ui, "List.focusCellHighlightBorder"_s));
		}
	} else {
		$assign(border, getNoFocusBorder());
	}
	setBorder(border);
	return this;
}

bool DefaultListCellRenderer::isOpaque() {
	$useLocalCurrentObjectStackCache();
	$var($Color, back, getBackground());
	$var($Component, p, getParent());
	if (p != nullptr) {
		$assign(p, p->getParent());
	}
	bool var$0 = (back != nullptr) && (p != nullptr) && back->equals($(p->getBackground()));
	bool colorMatch = var$0 && p->isOpaque();
	return !colorMatch && $JLabel::isOpaque();
}

void DefaultListCellRenderer::validate() {
}

void DefaultListCellRenderer::invalidate() {
}

void DefaultListCellRenderer::repaint() {
}

void DefaultListCellRenderer::revalidate() {
}

void DefaultListCellRenderer::repaint(int64_t tm, int32_t x, int32_t y, int32_t width, int32_t height) {
}

void DefaultListCellRenderer::repaint($Rectangle* r) {
}

void DefaultListCellRenderer::firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue) {
	bool var$0 = propertyName == "text"_s;
	if (!var$0) {
		bool var$1 = ($SwingUtilities2::isScaleChanged(propertyName, oldValue, newValue) || propertyName == "font"_s || propertyName == "foreground"_s) && !$equals(oldValue, newValue);
		$init($BasicHTML);
		var$0 = (var$1 && getClientProperty($BasicHTML::propertyKey) != nullptr);
	}
	if (var$0) {
		$JLabel::firePropertyChange(propertyName, oldValue, newValue);
	}
}

void DefaultListCellRenderer::firePropertyChange($String* propertyName, int8_t oldValue, int8_t newValue) {
}

void DefaultListCellRenderer::firePropertyChange($String* propertyName, char16_t oldValue, char16_t newValue) {
}

void DefaultListCellRenderer::firePropertyChange($String* propertyName, int16_t oldValue, int16_t newValue) {
}

void DefaultListCellRenderer::firePropertyChange($String* propertyName, int32_t oldValue, int32_t newValue) {
}

void DefaultListCellRenderer::firePropertyChange($String* propertyName, int64_t oldValue, int64_t newValue) {
}

void DefaultListCellRenderer::firePropertyChange($String* propertyName, float oldValue, float newValue) {
}

void DefaultListCellRenderer::firePropertyChange($String* propertyName, double oldValue, double newValue) {
}

void DefaultListCellRenderer::firePropertyChange($String* propertyName, bool oldValue, bool newValue) {
}

void clinit$DefaultListCellRenderer($Class* class$) {
	$assignStatic(DefaultListCellRenderer::SAFE_NO_FOCUS_BORDER, $new($EmptyBorder, 1, 1, 1, 1));
	$assignStatic(DefaultListCellRenderer::DEFAULT_NO_FOCUS_BORDER, $new($EmptyBorder, 1, 1, 1, 1));
	$assignStatic(DefaultListCellRenderer::noFocusBorder, DefaultListCellRenderer::DEFAULT_NO_FOCUS_BORDER);
}

DefaultListCellRenderer::DefaultListCellRenderer() {
}

$Class* DefaultListCellRenderer::load$($String* name, bool initialize) {
	$loadClass(DefaultListCellRenderer, name, initialize, &_DefaultListCellRenderer_ClassInfo_, clinit$DefaultListCellRenderer, allocate$DefaultListCellRenderer);
	return class$;
}

$Class* DefaultListCellRenderer::class$ = nullptr;

	} // swing
} // javax