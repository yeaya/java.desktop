#include <HeadlessJPopupMenu.h>

#include <HeadlessJPopupMenu$1.h>
#include <HeadlessJPopupMenu$2.h>
#include <HeadlessJPopupMenu$3.h>
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
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <jcpp.h>

#undef BOLD
#undef CROSSHAIR_CURSOR
#undef ITALIC
#undef LEFT_TO_RIGHT
#undef PLAIN
#undef RIGHT_TO_LEFT
#undef UNKNOWN

using $HeadlessJPopupMenu$1 = ::HeadlessJPopupMenu$1;
using $HeadlessJPopupMenu$2 = ::HeadlessJPopupMenu$2;
using $HeadlessJPopupMenu$3 = ::HeadlessJPopupMenu$3;
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
using $JMenu = ::javax::swing::JMenu;
using $JMenuItem = ::javax::swing::JMenuItem;

$MethodInfo _HeadlessJPopupMenu_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJPopupMenu::*)()>(&HeadlessJPopupMenu::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJPopupMenu::main))},
	{}
};

$InnerClassInfo _HeadlessJPopupMenu_InnerClassesInfo_[] = {
	{"HeadlessJPopupMenu$3", nullptr, nullptr, 0},
	{"HeadlessJPopupMenu$2", nullptr, nullptr, 0},
	{"HeadlessJPopupMenu$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJPopupMenu_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJPopupMenu",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJPopupMenu_MethodInfo_,
	nullptr,
	nullptr,
	_HeadlessJPopupMenu_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HeadlessJPopupMenu$3,HeadlessJPopupMenu$2,HeadlessJPopupMenu$1"
};

$Object* allocate$HeadlessJPopupMenu($Class* clazz) {
	return $of($alloc(HeadlessJPopupMenu));
}

void HeadlessJPopupMenu::init$() {
}

void HeadlessJPopupMenu::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($JMenu, m, $new($JMenu));
	m->getAccessibleContext();
	m->isFocusTraversable();
	m->setEnabled(false);
	m->setEnabled(true);
	m->requestFocus();
	m->requestFocusInWindow();
	m->getPreferredSize();
	m->getMaximumSize();
	m->getMinimumSize();
	m->contains(1, 2);
	$var($Component, c1, m->add(static_cast<$Component*>($$new($HeadlessJPopupMenu$1))));
	$var($Component, c2, m->add(static_cast<$Component*>($$new($HeadlessJPopupMenu$2))));
	$var($Component, c3, m->add(static_cast<$Component*>($$new($HeadlessJPopupMenu$3))));
	$var($Insets, ins, m->getInsets());
	m->getAlignmentY();
	m->getAlignmentX();
	m->getGraphics();
	m->setVisible(false);
	m->setVisible(true);
	$init($Color);
	m->setForeground($Color::red);
	m->setBackground($Color::red);
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
					m->setFont(f1);
					m->setFont(f2);
					m->setFont(f3);
					m->setFont(f4);
					m->getFontMetrics(f1);
					m->getFontMetrics(f2);
					m->getFontMetrics(f3);
					m->getFontMetrics(f4);
				}
			}
		}
	}
	m->enable();
	m->disable();
	m->reshape(10, 10, 10, 10);
	m->getBounds($$new($Rectangle, 1, 1, 1, 1));
	m->getSize($$new($Dimension, 1, 2));
	m->getLocation($$new($Point, 1, 2));
	m->getX();
	m->getY();
	m->getWidth();
	m->getHeight();
	m->isOpaque();
	m->isValidateRoot();
	m->isOptimizedDrawingEnabled();
	m->isDoubleBuffered();
	m->getComponentCount();
	m->countComponents();
	$var($ComponentArray, cs, m->getComponents());
	m->getLayout();
	m->setLayout($$new($FlowLayout));
	m->doLayout();
	m->layout();
	m->invalidate();
	m->validate();
	m->remove(0);
	m->remove(c2);
	m->removeAll();
	m->preferredSize();
	m->minimumSize();
	m->getComponentAt(1, 2);
	m->locate(1, 2);
	m->getComponentAt($$new($Point, 1, 2));
	m->isFocusCycleRoot($$new($Container));
	m->transferFocusBackward();
	m->setName("goober"_s);
	m->getName();
	m->getParent();
	m->getGraphicsConfiguration();
	m->getTreeLock();
	m->getToolkit();
	m->isValid();
	m->isDisplayable();
	m->isVisible();
	m->isShowing();
	m->isEnabled();
	m->enable(false);
	m->enable(true);
	m->enableInputMethods(false);
	m->enableInputMethods(true);
	m->show();
	m->show(false);
	m->show(true);
	m->hide();
	m->getForeground();
	m->isForegroundSet();
	m->getBackground();
	m->isBackgroundSet();
	m->getFont();
	m->isFontSet();
	$var($Container, c, $new($Container));
	c->add(static_cast<$Component*>(m));
	m->getLocale();
	{
		$var($LocaleArray, arr$, $Locale::getAvailableLocales());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locale, locale, arr$->get(i$));
			m->setLocale(locale);
		}
	}
	m->getColorModel();
	m->getLocation();
	bool exceptions = false;
	try {
		m->getLocationOnScreen();
	} catch ($IllegalComponentStateException&) {
		$var($IllegalComponentStateException, e, $catch());
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "IllegalComponentStateException did not occur when expected"_s);
	}
	m->location();
	m->setLocation(1, 2);
	m->move(1, 2);
	m->setLocation($$new($Point, 1, 2));
	m->getSize();
	m->size();
	m->setSize(1, 32);
	m->resize(1, 32);
	m->setSize($$new($Dimension, 1, 32));
	m->resize($$new($Dimension, 1, 32));
	m->getBounds();
	m->bounds();
	m->setBounds(10, 10, 10, 10);
	m->setBounds($$new($Rectangle, 10, 10, 10, 10));
	m->isLightweight();
	m->setCursor($$new($Cursor, $Cursor::CROSSHAIR_CURSOR));
	m->getCursor();
	m->isCursorSet();
	m->inside(1, 2);
	m->contains($$new($Point, 1, 2));
	m->isFocusable();
	m->setFocusable(true);
	m->setFocusable(false);
	m->transferFocus();
	m->getFocusCycleRootAncestor();
	m->nextFocus();
	m->transferFocusUpCycle();
	m->hasFocus();
	m->isFocusOwner();
	m->toString();
	$init($ComponentOrientation);
	m->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
	m->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
	m->setComponentOrientation($ComponentOrientation::UNKNOWN);
	m->getComponentOrientation();
}

HeadlessJPopupMenu::HeadlessJPopupMenu() {
}

$Class* HeadlessJPopupMenu::load$($String* name, bool initialize) {
	$loadClass(HeadlessJPopupMenu, name, initialize, &_HeadlessJPopupMenu_ClassInfo_, allocate$HeadlessJPopupMenu);
	return class$;
}

$Class* HeadlessJPopupMenu::class$ = nullptr;