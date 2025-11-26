#include <HeadlessJInternalFrame.h>

#include <HeadlessJInternalFrame$1.h>
#include <HeadlessJInternalFrame$2.h>
#include <HeadlessJInternalFrame$3.h>
#include <HeadlessJInternalFrame$4.h>
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
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/InternalFrameUI.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>
#include <jcpp.h>

#undef BOLD
#undef CROSSHAIR_CURSOR
#undef ITALIC
#undef LEFT_TO_RIGHT
#undef PLAIN
#undef RIGHT_TO_LEFT
#undef UNKNOWN

using $HeadlessJInternalFrame$1 = ::HeadlessJInternalFrame$1;
using $HeadlessJInternalFrame$2 = ::HeadlessJInternalFrame$2;
using $HeadlessJInternalFrame$3 = ::HeadlessJInternalFrame$3;
using $HeadlessJInternalFrame$4 = ::HeadlessJInternalFrame$4;
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
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $InternalFrameUI = ::javax::swing::plaf::InternalFrameUI;
using $BasicInternalFrameUI = ::javax::swing::plaf::basic::BasicInternalFrameUI;

$MethodInfo _HeadlessJInternalFrame_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJInternalFrame::*)()>(&HeadlessJInternalFrame::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJInternalFrame::main))},
	{}
};

$InnerClassInfo _HeadlessJInternalFrame_InnerClassesInfo_[] = {
	{"HeadlessJInternalFrame$4", nullptr, nullptr, 0},
	{"HeadlessJInternalFrame$3", nullptr, nullptr, 0},
	{"HeadlessJInternalFrame$2", nullptr, nullptr, 0},
	{"HeadlessJInternalFrame$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJInternalFrame_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJInternalFrame",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJInternalFrame_MethodInfo_,
	nullptr,
	nullptr,
	_HeadlessJInternalFrame_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HeadlessJInternalFrame$4,HeadlessJInternalFrame$3,HeadlessJInternalFrame$2,HeadlessJInternalFrame$1,HeadlessJInternalFrame$1$1,HeadlessJInternalFrame$1$1$1"
};

$Object* allocate$HeadlessJInternalFrame($Class* clazz) {
	return $of($alloc(HeadlessJInternalFrame));
}

void HeadlessJInternalFrame::init$() {
}

void HeadlessJInternalFrame::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($JInternalFrame, intf, $new($JInternalFrame, "TEST"_s));
	intf->setUI(static_cast<$InternalFrameUI*>($$new($HeadlessJInternalFrame$1, intf)));
	intf->setUI(($InternalFrameUI*)nullptr);
	intf->getAccessibleContext();
	intf->isFocusTraversable();
	intf->setEnabled(false);
	intf->setEnabled(true);
	intf->requestFocus();
	intf->requestFocusInWindow();
	intf->getPreferredSize();
	intf->getMaximumSize();
	intf->getMinimumSize();
	intf->contains(1, 2);
	$var($Component, c1, intf->add(static_cast<$Component*>($$new($HeadlessJInternalFrame$2))));
	$var($Component, c2, intf->add(static_cast<$Component*>($$new($HeadlessJInternalFrame$3))));
	$var($Component, c3, intf->add(static_cast<$Component*>($$new($HeadlessJInternalFrame$4))));
	$var($Insets, ins, intf->getInsets());
	intf->getAlignmentY();
	intf->getAlignmentX();
	intf->getGraphics();
	intf->setVisible(false);
	intf->setVisible(true);
	$init($Color);
	intf->setForeground($Color::red);
	intf->setBackground($Color::red);
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
					intf->setFont(f1);
					intf->setFont(f2);
					intf->setFont(f3);
					intf->setFont(f4);
					intf->getFontMetrics(f1);
					intf->getFontMetrics(f2);
					intf->getFontMetrics(f3);
					intf->getFontMetrics(f4);
				}
			}
		}
	}
	intf->enable();
	intf->disable();
	intf->reshape(10, 10, 10, 10);
	intf->getBounds($$new($Rectangle, 1, 1, 1, 1));
	intf->getSize($$new($Dimension, 1, 2));
	intf->getLocation($$new($Point, 1, 2));
	intf->getX();
	intf->getY();
	intf->getWidth();
	intf->getHeight();
	intf->isOpaque();
	intf->isValidateRoot();
	intf->isOptimizedDrawingEnabled();
	intf->isDoubleBuffered();
	intf->getComponentCount();
	intf->countComponents();
	intf->getComponent(0);
	$var($ComponentArray, cs, intf->getComponents());
	intf->getLayout();
	intf->setLayout($$new($FlowLayout));
	intf->doLayout();
	intf->layout();
	intf->invalidate();
	intf->validate();
	intf->remove(0);
	intf->remove(c2);
	intf->removeAll();
	intf->preferredSize();
	intf->minimumSize();
	intf->getComponentAt(1, 2);
	intf->locate(1, 2);
	intf->getComponentAt($$new($Point, 1, 2));
	intf->isFocusCycleRoot($$new($Container));
	intf->transferFocusBackward();
	intf->setName("goober"_s);
	intf->getName();
	intf->getParent();
	intf->getGraphicsConfiguration();
	intf->getTreeLock();
	intf->getToolkit();
	intf->isValid();
	intf->isDisplayable();
	intf->isVisible();
	intf->isShowing();
	intf->isEnabled();
	intf->enable(false);
	intf->enable(true);
	intf->enableInputMethods(false);
	intf->enableInputMethods(true);
	intf->show();
	intf->show(false);
	intf->show(true);
	intf->hide();
	intf->getForeground();
	intf->isForegroundSet();
	intf->getBackground();
	intf->isBackgroundSet();
	intf->getFont();
	intf->isFontSet();
	$var($Container, c, $new($Container));
	c->add(static_cast<$Component*>(intf));
	intf->getLocale();
	{
		$var($LocaleArray, arr$, $Locale::getAvailableLocales());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locale, locale, arr$->get(i$));
			intf->setLocale(locale);
		}
	}
	intf->getColorModel();
	intf->getLocation();
	bool exceptions = false;
	try {
		intf->getLocationOnScreen();
	} catch ($IllegalComponentStateException& e) {
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "IllegalComponentStateException did not occur when expected"_s);
	}
	intf->location();
	intf->setLocation(1, 2);
	intf->move(1, 2);
	intf->setLocation($$new($Point, 1, 2));
	intf->getSize();
	intf->size();
	intf->setSize(1, 32);
	intf->resize(1, 32);
	intf->setSize($$new($Dimension, 1, 32));
	intf->resize($$new($Dimension, 1, 32));
	intf->getBounds();
	intf->bounds();
	intf->setBounds(10, 10, 10, 10);
	intf->setBounds($$new($Rectangle, 10, 10, 10, 10));
	intf->isLightweight();
	intf->setCursor($$new($Cursor, $Cursor::CROSSHAIR_CURSOR));
	intf->getCursor();
	intf->isCursorSet();
	intf->inside(1, 2);
	intf->contains($$new($Point, 1, 2));
	intf->isFocusable();
	intf->setFocusable(true);
	intf->setFocusable(false);
	intf->transferFocus();
	intf->getFocusCycleRootAncestor();
	intf->nextFocus();
	intf->transferFocusUpCycle();
	intf->hasFocus();
	intf->isFocusOwner();
	intf->toString();
	$init($ComponentOrientation);
	intf->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
	intf->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
	intf->setComponentOrientation($ComponentOrientation::UNKNOWN);
	intf->getComponentOrientation();
}

HeadlessJInternalFrame::HeadlessJInternalFrame() {
}

$Class* HeadlessJInternalFrame::load$($String* name, bool initialize) {
	$loadClass(HeadlessJInternalFrame, name, initialize, &_HeadlessJInternalFrame_ClassInfo_, allocate$HeadlessJInternalFrame);
	return class$;
}

$Class* HeadlessJInternalFrame::class$ = nullptr;