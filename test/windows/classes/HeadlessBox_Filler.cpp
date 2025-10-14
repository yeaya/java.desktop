#include <HeadlessBox_Filler.h>

#include <HeadlessBox_Filler$1.h>
#include <HeadlessBox_Filler$2.h>
#include <HeadlessBox_Filler$3.h>
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
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/Box$Filler.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

#undef BOLD
#undef CROSSHAIR_CURSOR
#undef ITALIC
#undef LEFT_TO_RIGHT
#undef PLAIN
#undef RIGHT_TO_LEFT
#undef UNKNOWN

using $HeadlessBox_Filler$1 = ::HeadlessBox_Filler$1;
using $HeadlessBox_Filler$2 = ::HeadlessBox_Filler$2;
using $HeadlessBox_Filler$3 = ::HeadlessBox_Filler$3;
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
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $IllegalComponentStateException = ::java::awt::IllegalComponentStateException;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Locale = ::java::util::Locale;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $Box$Filler = ::javax::swing::Box$Filler;
using $JComponent = ::javax::swing::JComponent;

$MethodInfo _HeadlessBox_Filler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessBox_Filler::*)()>(&HeadlessBox_Filler::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessBox_Filler::main))},
	{}
};

$InnerClassInfo _HeadlessBox_Filler_InnerClassesInfo_[] = {
	{"HeadlessBox_Filler$3", nullptr, nullptr, 0},
	{"HeadlessBox_Filler$2", nullptr, nullptr, 0},
	{"HeadlessBox_Filler$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessBox_Filler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessBox_Filler",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessBox_Filler_MethodInfo_,
	nullptr,
	nullptr,
	_HeadlessBox_Filler_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HeadlessBox_Filler$3,HeadlessBox_Filler$2,HeadlessBox_Filler$1"
};

$Object* allocate$HeadlessBox_Filler($Class* clazz) {
	return $of($alloc(HeadlessBox_Filler));
}

void HeadlessBox_Filler::init$() {
}

void HeadlessBox_Filler::main($StringArray* args) {
	$var($Dimension, var$0, $new($Dimension, 10, 10));
	$var($Dimension, var$1, $new($Dimension, 20, 20));
	$var($Box$Filler, bf, $new($Box$Filler, var$0, var$1, $$new($Dimension, 30, 30)));
	bf->getMinimumSize();
	bf->getPreferredSize();
	bf->getMaximumSize();
	bf->getAccessibleContext();
	bf->requestFocus();
	bf->requestFocusInWindow();
	bf->contains(1, 2);
	$var($Component, c1, bf->add(static_cast<$Component*>($$new($HeadlessBox_Filler$1))));
	$var($Component, c2, bf->add(static_cast<$Component*>($$new($HeadlessBox_Filler$2))));
	$var($Component, c3, bf->add(static_cast<$Component*>($$new($HeadlessBox_Filler$3))));
	$var($Insets, ins, bf->getInsets());
	bf->getAlignmentY();
	bf->getAlignmentX();
	bf->getGraphics();
	bf->setVisible(false);
	bf->setVisible(true);
	bf->setEnabled(false);
	bf->setEnabled(true);
	$init($Color);
	bf->setForeground($Color::red);
	bf->setBackground($Color::red);
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
					bf->setFont(f1);
					bf->setFont(f2);
					bf->setFont(f3);
					bf->setFont(f4);
					bf->getFontMetrics(f1);
					bf->getFontMetrics(f2);
					bf->getFontMetrics(f3);
					bf->getFontMetrics(f4);
				}
			}
		}
	}
	bf->enable();
	bf->disable();
	bf->reshape(10, 10, 10, 10);
	bf->getBounds($$new($Rectangle, 1, 1, 1, 1));
	bf->getSize($$new($Dimension, 1, 2));
	bf->getLocation($$new($Point, 1, 2));
	bf->getX();
	bf->getY();
	bf->getWidth();
	bf->getHeight();
	bf->isOpaque();
	bf->isValidateRoot();
	bf->isOptimizedDrawingEnabled();
	bf->isDoubleBuffered();
	bf->getComponentCount();
	bf->countComponents();
	bf->getComponent(1);
	bf->getComponent(2);
	$var($ComponentArray, cs, bf->getComponents());
	bf->getLayout();
	bf->setLayout($$new($FlowLayout));
	bf->doLayout();
	bf->layout();
	bf->invalidate();
	bf->validate();
	bf->preferredSize();
	bf->remove(0);
	bf->remove(c2);
	bf->removeAll();
	bf->minimumSize();
	bf->getComponentAt(1, 2);
	bf->locate(1, 2);
	bf->getComponentAt($$new($Point, 1, 2));
	bf->isFocusCycleRoot($$new($Container));
	bf->transferFocusBackward();
	bf->setName("goober"_s);
	bf->getName();
	bf->getParent();
	bf->getGraphicsConfiguration();
	bf->getTreeLock();
	bf->getToolkit();
	bf->isValid();
	bf->isDisplayable();
	bf->isVisible();
	bf->isShowing();
	bf->isEnabled();
	bf->enable(false);
	bf->enable(true);
	bf->enableInputMethods(false);
	bf->enableInputMethods(true);
	bf->show();
	bf->show(false);
	bf->show(true);
	bf->hide();
	bf->getForeground();
	bf->isForegroundSet();
	bf->getBackground();
	bf->isBackgroundSet();
	bf->getFont();
	bf->isFontSet();
	$var($Container, c, $new($Container));
	c->add(static_cast<$Component*>(bf));
	bf->getLocale();
	{
		$var($LocaleArray, arr$, $Locale::getAvailableLocales());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locale, locale, arr$->get(i$));
			bf->setLocale(locale);
		}
	}
	bf->getColorModel();
	bf->getLocation();
	bool exceptions = false;
	try {
		bf->getLocationOnScreen();
	} catch ($IllegalComponentStateException&) {
		$var($IllegalComponentStateException, e, $catch());
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "IllegalComponentStateException did not occur when expected"_s);
	}
	bf->setLocation(1, 2);
	bf->move(1, 2);
	bf->setLocation($$new($Point, 1, 2));
	bf->getSize();
	bf->size();
	bf->setSize(1, 32);
	bf->resize(1, 32);
	bf->setSize($$new($Dimension, 1, 32));
	bf->resize($$new($Dimension, 1, 32));
	bf->getBounds();
	bf->bounds();
	bf->setBounds(10, 10, 10, 10);
	bf->setBounds($$new($Rectangle, 10, 10, 10, 10));
	bf->isLightweight();
	bf->setCursor($$new($Cursor, $Cursor::CROSSHAIR_CURSOR));
	bf->getCursor();
	bf->isCursorSet();
	bf->inside(1, 2);
	bf->contains($$new($Point, 1, 2));
	bf->isFocusTraversable();
	bf->isFocusable();
	bf->setFocusable(true);
	bf->setFocusable(false);
	bf->transferFocus();
	bf->getFocusCycleRootAncestor();
	bf->nextFocus();
	bf->transferFocusUpCycle();
	bf->hasFocus();
	bf->isFocusOwner();
	bf->toString();
	$init($ComponentOrientation);
	bf->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
	bf->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
	bf->setComponentOrientation($ComponentOrientation::UNKNOWN);
	bf->getComponentOrientation();
}

HeadlessBox_Filler::HeadlessBox_Filler() {
}

$Class* HeadlessBox_Filler::load$($String* name, bool initialize) {
	$loadClass(HeadlessBox_Filler, name, initialize, &_HeadlessBox_Filler_ClassInfo_, allocate$HeadlessBox_Filler);
	return class$;
}

$Class* HeadlessBox_Filler::class$ = nullptr;