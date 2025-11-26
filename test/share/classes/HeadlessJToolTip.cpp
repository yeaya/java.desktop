#include <HeadlessJToolTip.h>

#include <HeadlessJToolTip$1.h>
#include <HeadlessJToolTip$2.h>
#include <HeadlessJToolTip$3.h>
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
#include <javax/swing/JComponent.h>
#include <javax/swing/JToolTip.h>
#include <jcpp.h>

#undef BOLD
#undef CROSSHAIR_CURSOR
#undef ITALIC
#undef LEFT_TO_RIGHT
#undef PLAIN
#undef RIGHT_TO_LEFT
#undef UNKNOWN

using $HeadlessJToolTip$1 = ::HeadlessJToolTip$1;
using $HeadlessJToolTip$2 = ::HeadlessJToolTip$2;
using $HeadlessJToolTip$3 = ::HeadlessJToolTip$3;
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
using $JComponent = ::javax::swing::JComponent;
using $JToolTip = ::javax::swing::JToolTip;

$MethodInfo _HeadlessJToolTip_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJToolTip::*)()>(&HeadlessJToolTip::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJToolTip::main))},
	{}
};

$InnerClassInfo _HeadlessJToolTip_InnerClassesInfo_[] = {
	{"HeadlessJToolTip$3", nullptr, nullptr, 0},
	{"HeadlessJToolTip$2", nullptr, nullptr, 0},
	{"HeadlessJToolTip$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJToolTip_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJToolTip",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJToolTip_MethodInfo_,
	nullptr,
	nullptr,
	_HeadlessJToolTip_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HeadlessJToolTip$3,HeadlessJToolTip$2,HeadlessJToolTip$1"
};

$Object* allocate$HeadlessJToolTip($Class* clazz) {
	return $of($alloc(HeadlessJToolTip));
}

void HeadlessJToolTip::init$() {
}

void HeadlessJToolTip::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($JToolTip, tt, $new($JToolTip));
	tt->getAccessibleContext();
	tt->isFocusTraversable();
	tt->setEnabled(false);
	tt->setEnabled(true);
	tt->requestFocus();
	tt->requestFocusInWindow();
	tt->getPreferredSize();
	tt->getMaximumSize();
	tt->getMinimumSize();
	tt->contains(1, 2);
	$var($Component, c1, tt->add(static_cast<$Component*>($$new($HeadlessJToolTip$1))));
	$var($Component, c2, tt->add(static_cast<$Component*>($$new($HeadlessJToolTip$2))));
	$var($Component, c3, tt->add(static_cast<$Component*>($$new($HeadlessJToolTip$3))));
	$var($Insets, ins, tt->getInsets());
	tt->getAlignmentY();
	tt->getAlignmentX();
	tt->getGraphics();
	tt->setVisible(false);
	tt->setVisible(true);
	$init($Color);
	tt->setForeground($Color::red);
	tt->setBackground($Color::red);
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
					tt->setFont(f1);
					tt->setFont(f2);
					tt->setFont(f3);
					tt->setFont(f4);
					tt->getFontMetrics(f1);
					tt->getFontMetrics(f2);
					tt->getFontMetrics(f3);
					tt->getFontMetrics(f4);
				}
			}
		}
	}
	tt->enable();
	tt->disable();
	tt->reshape(10, 10, 10, 10);
	tt->getBounds($$new($Rectangle, 1, 1, 1, 1));
	tt->getSize($$new($Dimension, 1, 2));
	tt->getLocation($$new($Point, 1, 2));
	tt->getX();
	tt->getY();
	tt->getWidth();
	tt->getHeight();
	tt->isOpaque();
	tt->isValidateRoot();
	tt->isOptimizedDrawingEnabled();
	tt->isDoubleBuffered();
	tt->getComponentCount();
	tt->countComponents();
	tt->getComponent(1);
	tt->getComponent(2);
	$var($ComponentArray, cs, tt->getComponents());
	tt->getLayout();
	tt->setLayout($$new($FlowLayout));
	tt->doLayout();
	tt->layout();
	tt->invalidate();
	tt->validate();
	tt->remove(0);
	tt->remove(c2);
	tt->removeAll();
	tt->preferredSize();
	tt->minimumSize();
	tt->getComponentAt(1, 2);
	tt->locate(1, 2);
	tt->getComponentAt($$new($Point, 1, 2));
	tt->isFocusCycleRoot($$new($Container));
	tt->transferFocusBackward();
	tt->setName("goober"_s);
	tt->getName();
	tt->getParent();
	tt->getGraphicsConfiguration();
	tt->getTreeLock();
	tt->getToolkit();
	tt->isValid();
	tt->isDisplayable();
	tt->isVisible();
	tt->isShowing();
	tt->isEnabled();
	tt->enable(false);
	tt->enable(true);
	tt->enableInputMethods(false);
	tt->enableInputMethods(true);
	tt->show();
	tt->show(false);
	tt->show(true);
	tt->hide();
	tt->getForeground();
	tt->isForegroundSet();
	tt->getBackground();
	tt->isBackgroundSet();
	tt->getFont();
	tt->isFontSet();
	$var($Container, c, $new($Container));
	c->add(static_cast<$Component*>(tt));
	tt->getLocale();
	{
		$var($LocaleArray, arr$, $Locale::getAvailableLocales());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locale, locale, arr$->get(i$));
			tt->setLocale(locale);
		}
	}
	tt->getColorModel();
	tt->getLocation();
	bool exceptions = false;
	try {
		tt->getLocationOnScreen();
	} catch ($IllegalComponentStateException& e) {
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "IllegalComponentStateException did not occur when expected"_s);
	}
	tt->location();
	tt->setLocation(1, 2);
	tt->move(1, 2);
	tt->setLocation($$new($Point, 1, 2));
	tt->getSize();
	tt->size();
	tt->setSize(1, 32);
	tt->resize(1, 32);
	tt->setSize($$new($Dimension, 1, 32));
	tt->resize($$new($Dimension, 1, 32));
	tt->getBounds();
	tt->bounds();
	tt->setBounds(10, 10, 10, 10);
	tt->setBounds($$new($Rectangle, 10, 10, 10, 10));
	tt->isLightweight();
	tt->setCursor($$new($Cursor, $Cursor::CROSSHAIR_CURSOR));
	tt->getCursor();
	tt->isCursorSet();
	tt->inside(1, 2);
	tt->contains($$new($Point, 1, 2));
	tt->isFocusable();
	tt->setFocusable(true);
	tt->setFocusable(false);
	tt->transferFocus();
	tt->getFocusCycleRootAncestor();
	tt->nextFocus();
	tt->transferFocusUpCycle();
	tt->hasFocus();
	tt->isFocusOwner();
	tt->toString();
	$init($ComponentOrientation);
	tt->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
	tt->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
	tt->setComponentOrientation($ComponentOrientation::UNKNOWN);
	tt->getComponentOrientation();
}

HeadlessJToolTip::HeadlessJToolTip() {
}

$Class* HeadlessJToolTip::load$($String* name, bool initialize) {
	$loadClass(HeadlessJToolTip, name, initialize, &_HeadlessJToolTip_ClassInfo_, allocate$HeadlessJToolTip);
	return class$;
}

$Class* HeadlessJToolTip::class$ = nullptr;