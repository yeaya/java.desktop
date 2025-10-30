#include <HeadlessJRadioButtonMenuItem.h>

#include <HeadlessJRadioButtonMenuItem$1.h>
#include <HeadlessJRadioButtonMenuItem$2.h>
#include <HeadlessJRadioButtonMenuItem$3.h>
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
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JRadioButtonMenuItem.h>
#include <jcpp.h>

#undef BOLD
#undef CROSSHAIR_CURSOR
#undef ITALIC
#undef LEFT_TO_RIGHT
#undef PLAIN
#undef RIGHT_TO_LEFT
#undef UNKNOWN

using $HeadlessJRadioButtonMenuItem$1 = ::HeadlessJRadioButtonMenuItem$1;
using $HeadlessJRadioButtonMenuItem$2 = ::HeadlessJRadioButtonMenuItem$2;
using $HeadlessJRadioButtonMenuItem$3 = ::HeadlessJRadioButtonMenuItem$3;
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
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JRadioButtonMenuItem = ::javax::swing::JRadioButtonMenuItem;

$MethodInfo _HeadlessJRadioButtonMenuItem_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJRadioButtonMenuItem::*)()>(&HeadlessJRadioButtonMenuItem::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJRadioButtonMenuItem::main))},
	{}
};

$InnerClassInfo _HeadlessJRadioButtonMenuItem_InnerClassesInfo_[] = {
	{"HeadlessJRadioButtonMenuItem$3", nullptr, nullptr, 0},
	{"HeadlessJRadioButtonMenuItem$2", nullptr, nullptr, 0},
	{"HeadlessJRadioButtonMenuItem$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJRadioButtonMenuItem_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJRadioButtonMenuItem",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJRadioButtonMenuItem_MethodInfo_,
	nullptr,
	nullptr,
	_HeadlessJRadioButtonMenuItem_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HeadlessJRadioButtonMenuItem$3,HeadlessJRadioButtonMenuItem$2,HeadlessJRadioButtonMenuItem$1"
};

$Object* allocate$HeadlessJRadioButtonMenuItem($Class* clazz) {
	return $of($alloc(HeadlessJRadioButtonMenuItem));
}

void HeadlessJRadioButtonMenuItem::init$() {
}

void HeadlessJRadioButtonMenuItem::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($JRadioButtonMenuItem, i, $new($JRadioButtonMenuItem));
	i->getAccessibleContext();
	i->isFocusTraversable();
	i->setEnabled(false);
	i->setEnabled(true);
	i->requestFocus();
	i->requestFocusInWindow();
	i->getPreferredSize();
	i->getMaximumSize();
	i->getMinimumSize();
	i->contains(1, 2);
	$var($Component, c1, i->add(static_cast<$Component*>($$new($HeadlessJRadioButtonMenuItem$1))));
	$var($Component, c2, i->add(static_cast<$Component*>($$new($HeadlessJRadioButtonMenuItem$2))));
	$var($Component, c3, i->add(static_cast<$Component*>($$new($HeadlessJRadioButtonMenuItem$3))));
	$var($Insets, ins, i->getInsets());
	i->getAlignmentY();
	i->getAlignmentX();
	i->getGraphics();
	i->setVisible(false);
	i->setVisible(true);
	$init($Color);
	i->setForeground($Color::red);
	i->setBackground($Color::red);
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
					i->setFont(f1);
					i->setFont(f2);
					i->setFont(f3);
					i->setFont(f4);
					i->getFontMetrics(f1);
					i->getFontMetrics(f2);
					i->getFontMetrics(f3);
					i->getFontMetrics(f4);
				}
			}
		}
	}
	i->enable();
	i->disable();
	i->reshape(10, 10, 10, 10);
	i->getBounds($$new($Rectangle, 1, 1, 1, 1));
	i->getSize($$new($Dimension, 1, 2));
	i->getLocation($$new($Point, 1, 2));
	i->getX();
	i->getY();
	i->getWidth();
	i->getHeight();
	i->isOpaque();
	i->isValidateRoot();
	i->isOptimizedDrawingEnabled();
	i->isDoubleBuffered();
	i->getComponentCount();
	i->countComponents();
	i->getComponent(1);
	i->getComponent(2);
	$var($ComponentArray, cs, i->getComponents());
	i->getLayout();
	i->setLayout($$new($FlowLayout));
	i->doLayout();
	i->layout();
	i->invalidate();
	i->validate();
	i->remove(0);
	i->remove(c2);
	i->removeAll();
	i->preferredSize();
	i->minimumSize();
	i->getComponentAt(1, 2);
	i->locate(1, 2);
	i->getComponentAt($$new($Point, 1, 2));
	i->isFocusCycleRoot($$new($Container));
	i->transferFocusBackward();
	i->setName("goober"_s);
	i->getName();
	i->getParent();
	i->getGraphicsConfiguration();
	i->getTreeLock();
	i->getToolkit();
	i->isValid();
	i->isDisplayable();
	i->isVisible();
	i->isShowing();
	i->isEnabled();
	i->enable(false);
	i->enable(true);
	i->enableInputMethods(false);
	i->enableInputMethods(true);
	i->show();
	i->show(false);
	i->show(true);
	i->hide();
	i->getForeground();
	i->isForegroundSet();
	i->getBackground();
	i->isBackgroundSet();
	i->getFont();
	i->isFontSet();
	$var($Container, c, $new($Container));
	c->add(static_cast<$Component*>(i));
	i->getLocale();
	{
		$var($LocaleArray, arr$, $Locale::getAvailableLocales());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locale, locale, arr$->get(i$));
			i->setLocale(locale);
		}
	}
	i->getColorModel();
	i->getLocation();
	bool exceptions = false;
	try {
		i->getLocationOnScreen();
	} catch ($IllegalComponentStateException& e) {
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "IllegalComponentStateException did not occur when expected"_s);
	}
	i->location();
	i->setLocation(1, 2);
	i->move(1, 2);
	i->setLocation($$new($Point, 1, 2));
	i->getSize();
	i->size();
	i->setSize(1, 32);
	i->resize(1, 32);
	i->setSize($$new($Dimension, 1, 32));
	i->resize($$new($Dimension, 1, 32));
	i->getBounds();
	i->bounds();
	i->setBounds(10, 10, 10, 10);
	i->setBounds($$new($Rectangle, 10, 10, 10, 10));
	i->isLightweight();
	i->setCursor($$new($Cursor, $Cursor::CROSSHAIR_CURSOR));
	i->getCursor();
	i->isCursorSet();
	i->inside(1, 2);
	i->contains($$new($Point, 1, 2));
	i->isFocusable();
	i->setFocusable(true);
	i->setFocusable(false);
	i->transferFocus();
	i->getFocusCycleRootAncestor();
	i->nextFocus();
	i->transferFocusUpCycle();
	i->hasFocus();
	i->isFocusOwner();
	i->toString();
	$init($ComponentOrientation);
	i->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
	i->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
	i->setComponentOrientation($ComponentOrientation::UNKNOWN);
	i->getComponentOrientation();
}

HeadlessJRadioButtonMenuItem::HeadlessJRadioButtonMenuItem() {
}

$Class* HeadlessJRadioButtonMenuItem::load$($String* name, bool initialize) {
	$loadClass(HeadlessJRadioButtonMenuItem, name, initialize, &_HeadlessJRadioButtonMenuItem_ClassInfo_, allocate$HeadlessJRadioButtonMenuItem);
	return class$;
}

$Class* HeadlessJRadioButtonMenuItem::class$ = nullptr;