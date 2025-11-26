#include <HeadlessJCheckBox.h>

#include <HeadlessJCheckBox$1.h>
#include <HeadlessJCheckBox$2.h>
#include <HeadlessJCheckBox$3.h>
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
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToggleButton.h>
#include <jcpp.h>

#undef BOLD
#undef CROSSHAIR_CURSOR
#undef ITALIC
#undef LEFT_TO_RIGHT
#undef PLAIN
#undef RIGHT_TO_LEFT
#undef UNKNOWN

using $HeadlessJCheckBox$1 = ::HeadlessJCheckBox$1;
using $HeadlessJCheckBox$2 = ::HeadlessJCheckBox$2;
using $HeadlessJCheckBox$3 = ::HeadlessJCheckBox$3;
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
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComponent = ::javax::swing::JComponent;
using $JToggleButton = ::javax::swing::JToggleButton;

$MethodInfo _HeadlessJCheckBox_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJCheckBox::*)()>(&HeadlessJCheckBox::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJCheckBox::main))},
	{}
};

$InnerClassInfo _HeadlessJCheckBox_InnerClassesInfo_[] = {
	{"HeadlessJCheckBox$3", nullptr, nullptr, 0},
	{"HeadlessJCheckBox$2", nullptr, nullptr, 0},
	{"HeadlessJCheckBox$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJCheckBox_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJCheckBox",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJCheckBox_MethodInfo_,
	nullptr,
	nullptr,
	_HeadlessJCheckBox_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HeadlessJCheckBox$3,HeadlessJCheckBox$2,HeadlessJCheckBox$1"
};

$Object* allocate$HeadlessJCheckBox($Class* clazz) {
	return $of($alloc(HeadlessJCheckBox));
}

void HeadlessJCheckBox::init$() {
}

void HeadlessJCheckBox::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($JCheckBox, ch, nullptr);
	$assign(ch, $new($JCheckBox));
	$assign(ch, $new($JCheckBox, "Press me"_s));
	$assign(ch, $new($JCheckBox, "Press me"_s, true));
	$assign(ch, $new($JCheckBox, "Press me"_s, false));
	ch->getAccessibleContext();
	ch->isFocusTraversable();
	ch->setEnabled(false);
	ch->setEnabled(true);
	ch->requestFocus();
	ch->requestFocusInWindow();
	ch->getPreferredSize();
	ch->getMaximumSize();
	ch->getMinimumSize();
	ch->contains(1, 2);
	$var($Component, c1, ch->add(static_cast<$Component*>($$new($HeadlessJCheckBox$1))));
	$var($Component, c2, ch->add(static_cast<$Component*>($$new($HeadlessJCheckBox$2))));
	$var($Component, c3, ch->add(static_cast<$Component*>($$new($HeadlessJCheckBox$3))));
	$var($Insets, ins, ch->getInsets());
	ch->getAlignmentY();
	ch->getAlignmentX();
	ch->getGraphics();
	ch->setVisible(false);
	ch->setVisible(true);
	$init($Color);
	ch->setForeground($Color::red);
	ch->setBackground($Color::red);
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
					ch->setFont(f1);
					ch->setFont(f2);
					ch->setFont(f3);
					ch->setFont(f4);
					ch->getFontMetrics(f1);
					ch->getFontMetrics(f2);
					ch->getFontMetrics(f3);
					ch->getFontMetrics(f4);
				}
			}
		}
	}
	ch->enable();
	ch->disable();
	ch->reshape(10, 10, 10, 10);
	ch->getBounds($$new($Rectangle, 1, 1, 1, 1));
	ch->getSize($$new($Dimension, 1, 2));
	ch->getLocation($$new($Point, 1, 2));
	ch->getX();
	ch->getY();
	ch->getWidth();
	ch->getHeight();
	ch->isOpaque();
	ch->isValidateRoot();
	ch->isOptimizedDrawingEnabled();
	ch->isDoubleBuffered();
	ch->getComponentCount();
	ch->countComponents();
	ch->getComponent(1);
	ch->getComponent(2);
	$var($ComponentArray, cs, ch->getComponents());
	ch->getLayout();
	ch->setLayout($$new($FlowLayout));
	ch->doLayout();
	ch->layout();
	ch->invalidate();
	ch->validate();
	ch->remove(0);
	ch->remove(c2);
	ch->removeAll();
	ch->preferredSize();
	ch->minimumSize();
	ch->getComponentAt(1, 2);
	ch->locate(1, 2);
	ch->getComponentAt($$new($Point, 1, 2));
	ch->isFocusCycleRoot($$new($Container));
	ch->transferFocusBackward();
	ch->setName("goober"_s);
	ch->getName();
	ch->getParent();
	ch->getGraphicsConfiguration();
	ch->getTreeLock();
	ch->getToolkit();
	ch->isValid();
	ch->isDisplayable();
	ch->isVisible();
	ch->isShowing();
	ch->isEnabled();
	ch->enable(false);
	ch->enable(true);
	ch->enableInputMethods(false);
	ch->enableInputMethods(true);
	ch->show();
	ch->show(false);
	ch->show(true);
	ch->hide();
	ch->getForeground();
	ch->isForegroundSet();
	ch->getBackground();
	ch->isBackgroundSet();
	ch->getFont();
	ch->isFontSet();
	$var($Container, c, $new($Container));
	c->add(static_cast<$Component*>(ch));
	ch->getLocale();
	{
		$var($LocaleArray, arr$, $Locale::getAvailableLocales());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locale, locale, arr$->get(i$));
			ch->setLocale(locale);
		}
	}
	ch->getColorModel();
	ch->getLocation();
	bool exceptions = false;
	try {
		ch->getLocationOnScreen();
	} catch ($IllegalComponentStateException& e) {
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "IllegalComponentStateException did not occur when expected"_s);
	}
	ch->location();
	ch->setLocation(1, 2);
	ch->move(1, 2);
	ch->setLocation($$new($Point, 1, 2));
	ch->getSize();
	ch->size();
	ch->setSize(1, 32);
	ch->resize(1, 32);
	ch->setSize($$new($Dimension, 1, 32));
	ch->resize($$new($Dimension, 1, 32));
	ch->getBounds();
	ch->bounds();
	ch->setBounds(10, 10, 10, 10);
	ch->setBounds($$new($Rectangle, 10, 10, 10, 10));
	ch->isLightweight();
	ch->setCursor($$new($Cursor, $Cursor::CROSSHAIR_CURSOR));
	ch->getCursor();
	ch->isCursorSet();
	ch->inside(1, 2);
	ch->contains($$new($Point, 1, 2));
	ch->isFocusable();
	ch->setFocusable(true);
	ch->setFocusable(false);
	ch->transferFocus();
	ch->getFocusCycleRootAncestor();
	ch->nextFocus();
	ch->transferFocusUpCycle();
	ch->hasFocus();
	ch->isFocusOwner();
	ch->toString();
	$init($ComponentOrientation);
	ch->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
	ch->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
	ch->setComponentOrientation($ComponentOrientation::UNKNOWN);
	ch->getComponentOrientation();
}

HeadlessJCheckBox::HeadlessJCheckBox() {
}

$Class* HeadlessJCheckBox::load$($String* name, bool initialize) {
	$loadClass(HeadlessJCheckBox, name, initialize, &_HeadlessJCheckBox_ClassInfo_, allocate$HeadlessJCheckBox);
	return class$;
}

$Class* HeadlessJCheckBox::class$ = nullptr;