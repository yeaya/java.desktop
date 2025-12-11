#include <HeadlessDefaultListCellRenderer_UIResource.h>

#include <HeadlessDefaultListCellRenderer_UIResource$1.h>
#include <HeadlessDefaultListCellRenderer_UIResource$2.h>
#include <HeadlessDefaultListCellRenderer_UIResource$3.h>
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
#include <javax/swing/DefaultListCellRenderer$UIResource.h>
#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

#undef BOLD
#undef CROSSHAIR_CURSOR
#undef ITALIC
#undef LEFT_TO_RIGHT
#undef PLAIN
#undef RIGHT_TO_LEFT
#undef UNKNOWN

using $HeadlessDefaultListCellRenderer_UIResource$1 = ::HeadlessDefaultListCellRenderer_UIResource$1;
using $HeadlessDefaultListCellRenderer_UIResource$2 = ::HeadlessDefaultListCellRenderer_UIResource$2;
using $HeadlessDefaultListCellRenderer_UIResource$3 = ::HeadlessDefaultListCellRenderer_UIResource$3;
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
using $DefaultListCellRenderer = ::javax::swing::DefaultListCellRenderer;
using $DefaultListCellRenderer$UIResource = ::javax::swing::DefaultListCellRenderer$UIResource;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;

$MethodInfo _HeadlessDefaultListCellRenderer_UIResource_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessDefaultListCellRenderer_UIResource::*)()>(&HeadlessDefaultListCellRenderer_UIResource::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessDefaultListCellRenderer_UIResource::main))},
	{}
};

$InnerClassInfo _HeadlessDefaultListCellRenderer_UIResource_InnerClassesInfo_[] = {
	{"HeadlessDefaultListCellRenderer_UIResource$3", nullptr, nullptr, 0},
	{"HeadlessDefaultListCellRenderer_UIResource$2", nullptr, nullptr, 0},
	{"HeadlessDefaultListCellRenderer_UIResource$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessDefaultListCellRenderer_UIResource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessDefaultListCellRenderer_UIResource",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessDefaultListCellRenderer_UIResource_MethodInfo_,
	nullptr,
	nullptr,
	_HeadlessDefaultListCellRenderer_UIResource_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HeadlessDefaultListCellRenderer_UIResource$3,HeadlessDefaultListCellRenderer_UIResource$2,HeadlessDefaultListCellRenderer_UIResource$1"
};

$Object* allocate$HeadlessDefaultListCellRenderer_UIResource($Class* clazz) {
	return $of($alloc(HeadlessDefaultListCellRenderer_UIResource));
}

void HeadlessDefaultListCellRenderer_UIResource::init$() {
}

void HeadlessDefaultListCellRenderer_UIResource::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($DefaultListCellRenderer$UIResource, dcr, $new($DefaultListCellRenderer$UIResource));
	$var($Component, c1, dcr->add(static_cast<$Component*>($$new($HeadlessDefaultListCellRenderer_UIResource$1))));
	$var($Component, c2, dcr->add(static_cast<$Component*>($$new($HeadlessDefaultListCellRenderer_UIResource$2))));
	$var($Component, c3, dcr->add(static_cast<$Component*>($$new($HeadlessDefaultListCellRenderer_UIResource$3))));
	dcr->setLayout($$new($FlowLayout));
	dcr->invalidate();
	dcr->validate();
	dcr->getAccessibleContext();
	dcr->requestFocus();
	dcr->requestFocusInWindow();
	dcr->getPreferredSize();
	dcr->getMaximumSize();
	dcr->getMinimumSize();
	dcr->contains(1, 2);
	$var($Insets, ins, dcr->getInsets());
	dcr->getAlignmentY();
	dcr->getAlignmentX();
	dcr->getGraphics();
	dcr->setVisible(false);
	dcr->setVisible(true);
	dcr->setEnabled(false);
	dcr->setEnabled(true);
	$init($Color);
	dcr->setForeground($Color::red);
	dcr->setBackground($Color::red);
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
					dcr->setFont(f1);
					dcr->setFont(f2);
					dcr->setFont(f3);
					dcr->setFont(f4);
					dcr->getFontMetrics(f1);
					dcr->getFontMetrics(f2);
					dcr->getFontMetrics(f3);
					dcr->getFontMetrics(f4);
				}
			}
		}
	}
	dcr->enable();
	dcr->disable();
	dcr->reshape(10, 10, 10, 10);
	dcr->getBounds($$new($Rectangle, 1, 1, 1, 1));
	dcr->getSize($$new($Dimension, 1, 2));
	dcr->getLocation($$new($Point, 1, 2));
	dcr->getX();
	dcr->getY();
	dcr->getWidth();
	dcr->getHeight();
	dcr->isOpaque();
	dcr->isValidateRoot();
	dcr->isOptimizedDrawingEnabled();
	dcr->isDoubleBuffered();
	dcr->getComponentCount();
	dcr->countComponents();
	dcr->getComponent(1);
	dcr->getComponent(2);
	$var($ComponentArray, cs, dcr->getComponents());
	$assign(ins, dcr->insets());
	dcr->remove(0);
	dcr->remove(c2);
	dcr->removeAll();
	dcr->getLayout();
	dcr->setLayout($$new($FlowLayout));
	dcr->doLayout();
	dcr->layout();
	dcr->invalidate();
	dcr->validate();
	dcr->revalidate();
	dcr->preferredSize();
	dcr->minimumSize();
	dcr->getComponentAt(1, 2);
	dcr->locate(1, 2);
	dcr->getComponentAt($$new($Point, 1, 2));
	dcr->isFocusCycleRoot($$new($Container));
	dcr->transferFocusBackward();
	dcr->setName("goober"_s);
	dcr->getName();
	dcr->getParent();
	dcr->getGraphicsConfiguration();
	dcr->getTreeLock();
	dcr->getToolkit();
	dcr->isValid();
	dcr->isDisplayable();
	dcr->isVisible();
	dcr->isShowing();
	dcr->isEnabled();
	dcr->enable(false);
	dcr->enable(true);
	dcr->enableInputMethods(false);
	dcr->enableInputMethods(true);
	dcr->show();
	dcr->show(false);
	dcr->show(true);
	dcr->hide();
	dcr->getForeground();
	dcr->isForegroundSet();
	dcr->getBackground();
	dcr->isBackgroundSet();
	dcr->getFont();
	dcr->isFontSet();
	$var($Container, c, $new($Container));
	c->add(static_cast<$Component*>(dcr));
	dcr->getLocale();
	{
		$var($LocaleArray, arr$, $Locale::getAvailableLocales());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locale, locale, arr$->get(i$));
			dcr->setLocale(locale);
		}
	}
	dcr->getColorModel();
	dcr->getLocation();
	bool exceptions = false;
	try {
		dcr->getLocationOnScreen();
	} catch ($IllegalComponentStateException& e) {
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "IllegalComponentStateException did not occur when expected"_s);
	}
	dcr->location();
	dcr->setLocation(1, 2);
	dcr->move(1, 2);
	dcr->setLocation($$new($Point, 1, 2));
	dcr->getSize();
	dcr->size();
	dcr->setSize(1, 32);
	dcr->resize(1, 32);
	dcr->setSize($$new($Dimension, 1, 32));
	dcr->resize($$new($Dimension, 1, 32));
	dcr->getBounds();
	dcr->bounds();
	dcr->setBounds(10, 10, 10, 10);
	dcr->setBounds($$new($Rectangle, 10, 10, 10, 10));
	dcr->isLightweight();
	dcr->setCursor($$new($Cursor, $Cursor::CROSSHAIR_CURSOR));
	dcr->getCursor();
	dcr->isCursorSet();
	dcr->inside(1, 2);
	dcr->contains($$new($Point, 1, 2));
	dcr->isFocusTraversable();
	dcr->isFocusable();
	dcr->setFocusable(true);
	dcr->setFocusable(false);
	dcr->transferFocus();
	dcr->getFocusCycleRootAncestor();
	dcr->nextFocus();
	dcr->transferFocusUpCycle();
	dcr->hasFocus();
	dcr->isFocusOwner();
	dcr->toString();
	$init($ComponentOrientation);
	dcr->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
	dcr->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
	dcr->setComponentOrientation($ComponentOrientation::UNKNOWN);
	dcr->getComponentOrientation();
}

HeadlessDefaultListCellRenderer_UIResource::HeadlessDefaultListCellRenderer_UIResource() {
}

$Class* HeadlessDefaultListCellRenderer_UIResource::load$($String* name, bool initialize) {
	$loadClass(HeadlessDefaultListCellRenderer_UIResource, name, initialize, &_HeadlessDefaultListCellRenderer_UIResource_ClassInfo_, allocate$HeadlessDefaultListCellRenderer_UIResource);
	return class$;
}

$Class* HeadlessDefaultListCellRenderer_UIResource::class$ = nullptr;