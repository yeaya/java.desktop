#include <HeadlessJPanel.h>

#include <HeadlessJPanel$1.h>
#include <HeadlessJPanel$2.h>
#include <HeadlessJPanel$3.h>
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
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

#undef BOLD
#undef CROSSHAIR_CURSOR
#undef ITALIC
#undef LEFT_TO_RIGHT
#undef PLAIN
#undef RIGHT_TO_LEFT
#undef UNKNOWN

using $HeadlessJPanel$1 = ::HeadlessJPanel$1;
using $HeadlessJPanel$2 = ::HeadlessJPanel$2;
using $HeadlessJPanel$3 = ::HeadlessJPanel$3;
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
using $JPanel = ::javax::swing::JPanel;

$MethodInfo _HeadlessJPanel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJPanel::*)()>(&HeadlessJPanel::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJPanel::main))},
	{}
};

$InnerClassInfo _HeadlessJPanel_InnerClassesInfo_[] = {
	{"HeadlessJPanel$3", nullptr, nullptr, 0},
	{"HeadlessJPanel$2", nullptr, nullptr, 0},
	{"HeadlessJPanel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJPanel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJPanel",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJPanel_MethodInfo_,
	nullptr,
	nullptr,
	_HeadlessJPanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HeadlessJPanel$3,HeadlessJPanel$2,HeadlessJPanel$1"
};

$Object* allocate$HeadlessJPanel($Class* clazz) {
	return $of($alloc(HeadlessJPanel));
}

void HeadlessJPanel::init$() {
}

void HeadlessJPanel::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($JPanel, p, $new($JPanel));
	p->getAccessibleContext();
	p->isFocusTraversable();
	p->setEnabled(false);
	p->setEnabled(true);
	p->requestFocus();
	p->requestFocusInWindow();
	p->getPreferredSize();
	p->getMaximumSize();
	p->getMinimumSize();
	p->contains(1, 2);
	$var($Component, c1, p->add(static_cast<$Component*>($$new($HeadlessJPanel$1))));
	$var($Component, c2, p->add(static_cast<$Component*>($$new($HeadlessJPanel$2))));
	$var($Component, c3, p->add(static_cast<$Component*>($$new($HeadlessJPanel$3))));
	$var($Insets, ins, p->getInsets());
	p->getAlignmentY();
	p->getAlignmentX();
	p->getGraphics();
	p->setVisible(false);
	p->setVisible(true);
	$init($Color);
	p->setForeground($Color::red);
	p->setBackground($Color::red);
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
					p->setFont(f1);
					p->setFont(f2);
					p->setFont(f3);
					p->setFont(f4);
					p->getFontMetrics(f1);
					p->getFontMetrics(f2);
					p->getFontMetrics(f3);
					p->getFontMetrics(f4);
				}
			}
		}
	}
	p->enable();
	p->disable();
	p->reshape(10, 10, 10, 10);
	p->getBounds($$new($Rectangle, 1, 1, 1, 1));
	p->getSize($$new($Dimension, 1, 2));
	p->getLocation($$new($Point, 1, 2));
	p->getX();
	p->getY();
	p->getWidth();
	p->getHeight();
	p->isOpaque();
	p->isValidateRoot();
	p->isOptimizedDrawingEnabled();
	p->isDoubleBuffered();
	p->getComponentCount();
	p->countComponents();
	p->getComponent(1);
	p->getComponent(2);
	$var($ComponentArray, cs, p->getComponents());
	p->getLayout();
	p->setLayout($$new($FlowLayout));
	p->doLayout();
	p->layout();
	p->invalidate();
	p->validate();
	p->remove(0);
	p->remove(c2);
	p->removeAll();
	p->preferredSize();
	p->minimumSize();
	p->getComponentAt(1, 2);
	p->locate(1, 2);
	p->getComponentAt($$new($Point, 1, 2));
	p->isFocusCycleRoot($$new($Container));
	p->transferFocusBackward();
	p->setName("goober"_s);
	p->getName();
	p->getParent();
	p->getGraphicsConfiguration();
	p->getTreeLock();
	p->getToolkit();
	p->isValid();
	p->isDisplayable();
	p->isVisible();
	p->isShowing();
	p->isEnabled();
	p->enable(false);
	p->enable(true);
	p->enableInputMethods(false);
	p->enableInputMethods(true);
	p->show();
	p->show(false);
	p->show(true);
	p->hide();
	p->getForeground();
	p->isForegroundSet();
	p->getBackground();
	p->isBackgroundSet();
	p->getFont();
	p->isFontSet();
	$var($Container, c, $new($Container));
	c->add(static_cast<$Component*>(p));
	p->getLocale();
	{
		$var($LocaleArray, arr$, $Locale::getAvailableLocales());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locale, locale, arr$->get(i$));
			p->setLocale(locale);
		}
	}
	p->getColorModel();
	p->getLocation();
	bool exceptions = false;
	try {
		p->getLocationOnScreen();
	} catch ($IllegalComponentStateException&) {
		$var($IllegalComponentStateException, e, $catch());
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "IllegalComponentStateException did not occur when expected"_s);
	}
	p->location();
	p->setLocation(1, 2);
	p->move(1, 2);
	p->setLocation($$new($Point, 1, 2));
	p->getSize();
	p->size();
	p->setSize(1, 32);
	p->resize(1, 32);
	p->setSize($$new($Dimension, 1, 32));
	p->resize($$new($Dimension, 1, 32));
	p->getBounds();
	p->bounds();
	p->setBounds(10, 10, 10, 10);
	p->setBounds($$new($Rectangle, 10, 10, 10, 10));
	p->isLightweight();
	p->setCursor($$new($Cursor, $Cursor::CROSSHAIR_CURSOR));
	p->getCursor();
	p->isCursorSet();
	p->inside(1, 2);
	p->contains($$new($Point, 1, 2));
	p->isFocusable();
	p->setFocusable(true);
	p->setFocusable(false);
	p->transferFocus();
	p->getFocusCycleRootAncestor();
	p->nextFocus();
	p->transferFocusUpCycle();
	p->hasFocus();
	p->isFocusOwner();
	p->toString();
	$init($ComponentOrientation);
	p->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
	p->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
	p->setComponentOrientation($ComponentOrientation::UNKNOWN);
	p->getComponentOrientation();
}

HeadlessJPanel::HeadlessJPanel() {
}

$Class* HeadlessJPanel::load$($String* name, bool initialize) {
	$loadClass(HeadlessJPanel, name, initialize, &_HeadlessJPanel_ClassInfo_, allocate$HeadlessJPanel);
	return class$;
}

$Class* HeadlessJPanel::class$ = nullptr;