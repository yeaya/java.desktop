#include <HeadlessJViewport.h>

#include <HeadlessJViewport$1.h>
#include <HeadlessJViewport$2.h>
#include <HeadlessJViewport$3.h>
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
#include <javax/swing/JViewport.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ViewportUI.h>
#include <jcpp.h>

#undef BOLD
#undef CROSSHAIR_CURSOR
#undef ITALIC
#undef LEFT_TO_RIGHT
#undef PLAIN
#undef RIGHT_TO_LEFT
#undef UNKNOWN

using $HeadlessJViewport$1 = ::HeadlessJViewport$1;
using $HeadlessJViewport$2 = ::HeadlessJViewport$2;
using $HeadlessJViewport$3 = ::HeadlessJViewport$3;
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
using $JViewport = ::javax::swing::JViewport;
using $ViewportUI = ::javax::swing::plaf::ViewportUI;

$MethodInfo _HeadlessJViewport_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJViewport::*)()>(&HeadlessJViewport::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJViewport::main))},
	{}
};

$InnerClassInfo _HeadlessJViewport_InnerClassesInfo_[] = {
	{"HeadlessJViewport$3", nullptr, nullptr, 0},
	{"HeadlessJViewport$2", nullptr, nullptr, 0},
	{"HeadlessJViewport$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJViewport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJViewport",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJViewport_MethodInfo_,
	nullptr,
	nullptr,
	_HeadlessJViewport_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HeadlessJViewport$3,HeadlessJViewport$2,HeadlessJViewport$1"
};

$Object* allocate$HeadlessJViewport($Class* clazz) {
	return $of($alloc(HeadlessJViewport));
}

void HeadlessJViewport::init$() {
}

void HeadlessJViewport::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($JViewport, v, $new($JViewport));
	v->getUI();
	v->getUIClassID();
	v->setUI(($ViewportUI*)nullptr);
	v->updateUI();
	$var($JComponent, view, $new($JPanel));
	view->setMinimumSize($$new($Dimension, 123, 456));
	v->setView(view);
	v->getAccessibleContext();
	v->isFocusTraversable();
	v->setEnabled(false);
	v->setEnabled(true);
	v->requestFocus();
	v->requestFocusInWindow();
	v->getPreferredSize();
	v->getMaximumSize();
	v->getMinimumSize();
	v->contains(1, 2);
	$var($Component, c1, v->add(static_cast<$Component*>($$new($HeadlessJViewport$1))));
	$var($Component, c2, v->add(static_cast<$Component*>($$new($HeadlessJViewport$2))));
	$var($Component, c3, v->add(static_cast<$Component*>($$new($HeadlessJViewport$3))));
	$var($Insets, ins, v->getInsets());
	v->getAlignmentY();
	v->getAlignmentX();
	v->getGraphics();
	v->setVisible(false);
	v->setVisible(true);
	$init($Color);
	v->setForeground($Color::red);
	v->setBackground($Color::red);
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
					v->setFont(f1);
					v->setFont(f2);
					v->setFont(f3);
					v->setFont(f4);
					v->getFontMetrics(f1);
					v->getFontMetrics(f2);
					v->getFontMetrics(f3);
					v->getFontMetrics(f4);
				}
			}
		}
	}
	v->enable();
	v->disable();
	v->reshape(10, 10, 10, 10);
	v->getBounds($$new($Rectangle, 1, 1, 1, 1));
	v->getSize($$new($Dimension, 1, 2));
	v->getLocation($$new($Point, 1, 2));
	v->getX();
	v->getY();
	v->getWidth();
	v->getHeight();
	v->isOpaque();
	v->isValidateRoot();
	v->isOptimizedDrawingEnabled();
	v->isDoubleBuffered();
	v->getComponentCount();
	v->countComponents();
	v->getComponent(0);
	$var($ComponentArray, cs, v->getComponents());
	v->getLayout();
	v->setLayout($$new($FlowLayout));
	v->doLayout();
	v->layout();
	v->invalidate();
	v->validate();
	v->remove(0);
	v->remove(c2);
	v->removeAll();
	v->preferredSize();
	v->minimumSize();
	v->getComponentAt(1, 2);
	v->locate(1, 2);
	v->getComponentAt($$new($Point, 1, 2));
	v->isFocusCycleRoot($$new($Container));
	v->transferFocusBackward();
	v->setName("goober"_s);
	v->getName();
	v->getParent();
	v->getGraphicsConfiguration();
	v->getTreeLock();
	v->getToolkit();
	v->isValid();
	v->isDisplayable();
	v->isVisible();
	v->isShowing();
	v->isEnabled();
	v->enable(false);
	v->enable(true);
	v->enableInputMethods(false);
	v->enableInputMethods(true);
	v->show();
	v->show(false);
	v->show(true);
	v->hide();
	v->getForeground();
	v->isForegroundSet();
	v->getBackground();
	v->isBackgroundSet();
	v->getFont();
	v->isFontSet();
	$var($Container, c, $new($Container));
	c->add(static_cast<$Component*>(v));
	v->getLocale();
	{
		$var($LocaleArray, arr$, $Locale::getAvailableLocales());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locale, locale, arr$->get(i$));
			v->setLocale(locale);
		}
	}
	v->getColorModel();
	v->getLocation();
	bool exceptions = false;
	try {
		v->getLocationOnScreen();
	} catch ($IllegalComponentStateException&) {
		$var($IllegalComponentStateException, e, $catch());
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "IllegalComponentStateException did not occur when expected"_s);
	}
	v->location();
	v->setLocation(1, 2);
	v->move(1, 2);
	v->setLocation($$new($Point, 1, 2));
	v->getSize();
	v->size();
	v->setSize(1, 32);
	v->resize(1, 32);
	v->setSize($$new($Dimension, 1, 32));
	v->resize($$new($Dimension, 1, 32));
	v->getBounds();
	v->bounds();
	v->setBounds(10, 10, 10, 10);
	v->setBounds($$new($Rectangle, 10, 10, 10, 10));
	v->isLightweight();
	v->setCursor($$new($Cursor, $Cursor::CROSSHAIR_CURSOR));
	v->getCursor();
	v->isCursorSet();
	v->inside(1, 2);
	v->contains($$new($Point, 1, 2));
	v->isFocusable();
	v->setFocusable(true);
	v->setFocusable(false);
	v->transferFocus();
	v->getFocusCycleRootAncestor();
	v->nextFocus();
	v->transferFocusUpCycle();
	v->hasFocus();
	v->isFocusOwner();
	v->toString();
	$init($ComponentOrientation);
	v->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
	v->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
	v->setComponentOrientation($ComponentOrientation::UNKNOWN);
	v->getComponentOrientation();
}

HeadlessJViewport::HeadlessJViewport() {
}

$Class* HeadlessJViewport::load$($String* name, bool initialize) {
	$loadClass(HeadlessJViewport, name, initialize, &_HeadlessJViewport_ClassInfo_, allocate$HeadlessJViewport);
	return class$;
}

$Class* HeadlessJViewport::class$ = nullptr;