#include <HeadlessJRadioButton.h>

#include <HeadlessJRadioButton$1.h>
#include <HeadlessJRadioButton$2.h>
#include <HeadlessJRadioButton$3.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/IllegalComponentStateException.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/image/ColorModel.h>
#include <java/util/Locale.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JToggleButton.h>
#include <jcpp.h>

#undef BOLD
#undef CROSSHAIR_CURSOR
#undef ITALIC
#undef LEFT_TO_RIGHT
#undef PLAIN
#undef RIGHT_TO_LEFT
#undef UNKNOWN

using $HeadlessJRadioButton$1 = ::HeadlessJRadioButton$1;
using $HeadlessJRadioButton$2 = ::HeadlessJRadioButton$2;
using $HeadlessJRadioButton$3 = ::HeadlessJRadioButton$3;
using $ComponentArray = $Array<::java::awt::Component>;
using $LocaleArray = $Array<::java::util::Locale>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $FlowLayout = ::java::awt::FlowLayout;
using $Font = ::java::awt::Font;
using $IllegalComponentStateException = ::java::awt::IllegalComponentStateException;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Locale = ::java::util::Locale;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JToggleButton = ::javax::swing::JToggleButton;

$MethodInfo _HeadlessJRadioButton_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJRadioButton::*)()>(&HeadlessJRadioButton::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJRadioButton::main))},
	{}
};

$InnerClassInfo _HeadlessJRadioButton_InnerClassesInfo_[] = {
	{"HeadlessJRadioButton$3", nullptr, nullptr, 0},
	{"HeadlessJRadioButton$2", nullptr, nullptr, 0},
	{"HeadlessJRadioButton$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJRadioButton_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJRadioButton",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJRadioButton_MethodInfo_,
	nullptr,
	nullptr,
	_HeadlessJRadioButton_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HeadlessJRadioButton$3,HeadlessJRadioButton$2,HeadlessJRadioButton$1"
};

$Object* allocate$HeadlessJRadioButton($Class* clazz) {
	return $of($alloc(HeadlessJRadioButton));
}

void HeadlessJRadioButton::init$() {
}

void HeadlessJRadioButton::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($JRadioButton, rb, $new($JRadioButton));
	rb->getAccessibleContext();
	rb->isFocusTraversable();
	rb->setEnabled(false);
	rb->setEnabled(true);
	rb->requestFocus();
	rb->requestFocusInWindow();
	rb->getPreferredSize();
	rb->getMaximumSize();
	rb->getMinimumSize();
	rb->contains(1, 2);
	$var($Component, c1, rb->add(static_cast<$Component*>($$new($HeadlessJRadioButton$1))));
	$var($Component, c2, rb->add(static_cast<$Component*>($$new($HeadlessJRadioButton$2))));
	$var($Component, c3, rb->add(static_cast<$Component*>($$new($HeadlessJRadioButton$3))));
	$var($Insets, ins, rb->getInsets());
	rb->getAlignmentY();
	rb->getAlignmentX();
	rb->getGraphics();
	rb->setVisible(false);
	rb->setVisible(true);
	$init($Color);
	rb->setForeground($Color::red);
	rb->setBackground($Color::red);
	{
		$var($StringArray, arr$, $nc($($Toolkit::getDefaultToolkit()))->getFontList());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, font, arr$->get(i$));
			{
				for (int32_t j = 8; j < 17; ++j) {
					$var($Font, f1, $new($Font, font, $Font::PLAIN, j));
					$var($Font, f2, $new($Font, font, $Font::BOLD, j));
					$var($Font, f3, $new($Font, font, $Font::ITALIC, j));
					$var($Font, f4, $new($Font, font, $Font::BOLD | $Font::ITALIC, j));
					rb->setFont(f1);
					rb->setFont(f2);
					rb->setFont(f3);
					rb->setFont(f4);
					rb->getFontMetrics(f1);
					rb->getFontMetrics(f2);
					rb->getFontMetrics(f3);
					rb->getFontMetrics(f4);
				}
			}
		}
	}
	rb->enable();
	rb->disable();
	rb->reshape(10, 10, 10, 10);
	rb->getBounds($$new($Rectangle, 1, 1, 1, 1));
	rb->getSize($$new($Dimension, 1, 2));
	rb->getLocation($$new($Point, 1, 2));
	rb->getX();
	rb->getY();
	rb->getWidth();
	rb->getHeight();
	rb->isOpaque();
	rb->isValidateRoot();
	rb->isOptimizedDrawingEnabled();
	rb->isDoubleBuffered();
	rb->getComponentCount();
	rb->countComponents();
	rb->getComponent(1);
	rb->getComponent(2);
	$var($ComponentArray, cs, rb->getComponents());
	rb->getLayout();
	rb->setLayout($$new($FlowLayout));
	rb->doLayout();
	rb->layout();
	rb->invalidate();
	rb->validate();
	rb->remove(0);
	rb->remove(c2);
	rb->removeAll();
	rb->preferredSize();
	rb->minimumSize();
	rb->getComponentAt(1, 2);
	rb->locate(1, 2);
	rb->getComponentAt($$new($Point, 1, 2));
	rb->isFocusCycleRoot($$new($Container));
	rb->transferFocusBackward();
	rb->setName("goober"_s);
	rb->getName();
	rb->getParent();
	rb->getGraphicsConfiguration();
	rb->getTreeLock();
	rb->getToolkit();
	rb->isValid();
	rb->isDisplayable();
	rb->isVisible();
	rb->isShowing();
	rb->isEnabled();
	rb->enable(false);
	rb->enable(true);
	rb->enableInputMethods(false);
	rb->enableInputMethods(true);
	rb->show();
	rb->show(false);
	rb->show(true);
	rb->hide();
	rb->getForeground();
	rb->isForegroundSet();
	rb->getBackground();
	rb->isBackgroundSet();
	rb->getFont();
	rb->isFontSet();
	$var($Container, c, $new($Container));
	c->add(static_cast<$Component*>(rb));
	rb->getLocale();
	{
		$var($LocaleArray, arr$, $Locale::getAvailableLocales());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locale, locale, arr$->get(i$));
			rb->setLocale(locale);
		}
	}
	rb->getColorModel();
	rb->getLocation();
	bool exceptions = false;
	try {
		rb->getLocationOnScreen();
	} catch ($IllegalComponentStateException& e) {
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "IllegalComponentStateException did not occur when expected"_s);
	}
	rb->location();
	rb->setLocation(1, 2);
	rb->move(1, 2);
	rb->setLocation($$new($Point, 1, 2));
	rb->getSize();
	rb->size();
	rb->setSize(1, 32);
	rb->resize(1, 32);
	rb->setSize($$new($Dimension, 1, 32));
	rb->resize($$new($Dimension, 1, 32));
	rb->getBounds();
	rb->bounds();
	rb->setBounds(10, 10, 10, 10);
	rb->setBounds($$new($Rectangle, 10, 10, 10, 10));
	rb->isLightweight();
	rb->setCursor($$new($Cursor, $Cursor::CROSSHAIR_CURSOR));
	rb->getCursor();
	rb->isCursorSet();
	rb->inside(1, 2);
	rb->contains($$new($Point, 1, 2));
	rb->isFocusable();
	rb->setFocusable(true);
	rb->setFocusable(false);
	rb->transferFocus();
	rb->getFocusCycleRootAncestor();
	rb->nextFocus();
	rb->transferFocusUpCycle();
	rb->hasFocus();
	rb->isFocusOwner();
	rb->toString();
	$init($ComponentOrientation);
	rb->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
	rb->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
	rb->setComponentOrientation($ComponentOrientation::UNKNOWN);
	rb->getComponentOrientation();
}

HeadlessJRadioButton::HeadlessJRadioButton() {
}

$Class* HeadlessJRadioButton::load$($String* name, bool initialize) {
	$loadClass(HeadlessJRadioButton, name, initialize, &_HeadlessJRadioButton_ClassInfo_, allocate$HeadlessJRadioButton);
	return class$;
}

$Class* HeadlessJRadioButton::class$ = nullptr;