#include <HeadlessJTree.h>

#include <HeadlessJTree$1.h>
#include <HeadlessJTree$2.h>
#include <HeadlessJTree$3.h>
#include <HeadlessJTree$4.h>
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
#include <javax/swing/JTree.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/DefaultTreeCellRenderer.h>
#include <javax/swing/tree/DefaultTreeModel.h>
#include <javax/swing/tree/MutableTreeNode.h>
#include <javax/swing/tree/TreeCellRenderer.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreeNode.h>
#include <jcpp.h>

#undef BOLD
#undef CROSSHAIR_CURSOR
#undef ITALIC
#undef LEFT_TO_RIGHT
#undef PLAIN
#undef RIGHT_TO_LEFT
#undef UNKNOWN

using $HeadlessJTree$1 = ::HeadlessJTree$1;
using $HeadlessJTree$2 = ::HeadlessJTree$2;
using $HeadlessJTree$3 = ::HeadlessJTree$3;
using $HeadlessJTree$4 = ::HeadlessJTree$4;
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
using $JTree = ::javax::swing::JTree;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $DefaultTreeCellRenderer = ::javax::swing::tree::DefaultTreeCellRenderer;
using $DefaultTreeModel = ::javax::swing::tree::DefaultTreeModel;
using $MutableTreeNode = ::javax::swing::tree::MutableTreeNode;
using $TreeCellRenderer = ::javax::swing::tree::TreeCellRenderer;
using $TreeModel = ::javax::swing::tree::TreeModel;
using $TreeNode = ::javax::swing::tree::TreeNode;

$MethodInfo _HeadlessJTree_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJTree::*)()>(&HeadlessJTree::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJTree::main))},
	{}
};

$InnerClassInfo _HeadlessJTree_InnerClassesInfo_[] = {
	{"HeadlessJTree$4", nullptr, nullptr, 0},
	{"HeadlessJTree$3", nullptr, nullptr, 0},
	{"HeadlessJTree$2", nullptr, nullptr, 0},
	{"HeadlessJTree$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJTree_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJTree",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJTree_MethodInfo_,
	nullptr,
	nullptr,
	_HeadlessJTree_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HeadlessJTree$4,HeadlessJTree$3,HeadlessJTree$2,HeadlessJTree$1"
};

$Object* allocate$HeadlessJTree($Class* clazz) {
	return $of($alloc(HeadlessJTree));
}

void HeadlessJTree::init$() {
}

void HeadlessJTree::main($StringArray* args) {
	$var($JTree, t, nullptr);
	$var($DefaultMutableTreeNode, root, $new($DefaultMutableTreeNode, "JTree"_s));
	$var($DefaultMutableTreeNode, parent, nullptr);
	$assign(parent, $new($DefaultMutableTreeNode, "colors"_s));
	root->add(parent);
	parent->add($$new($DefaultMutableTreeNode, "blue"_s));
	parent->add($$new($DefaultMutableTreeNode, "violet"_s));
	parent->add($$new($DefaultMutableTreeNode, "red"_s));
	parent->add($$new($DefaultMutableTreeNode, "yellow"_s));
	$assign(parent, $new($DefaultMutableTreeNode, "sports"_s));
	root->add(parent);
	parent->add($$new($DefaultMutableTreeNode, "basketball"_s));
	parent->add($$new($DefaultMutableTreeNode, "soccer"_s));
	parent->add($$new($DefaultMutableTreeNode, "football"_s));
	parent->add($$new($DefaultMutableTreeNode, "hockey"_s));
	$assign(parent, $new($DefaultMutableTreeNode, "food"_s));
	root->add(parent);
	parent->add($$new($DefaultMutableTreeNode, "hot dogs"_s));
	parent->add($$new($DefaultMutableTreeNode, "pizza"_s));
	parent->add($$new($DefaultMutableTreeNode, "ravioli"_s));
	parent->add($$new($DefaultMutableTreeNode, "bananas"_s));
	$assign(t, $new($JTree, static_cast<$TreeNode*>(root)));
	$assign(t, $new($JTree, static_cast<$TreeModel*>($$new($DefaultTreeModel, root))));
	t->setCellRenderer($$new($HeadlessJTree$1));
	t->getCellRenderer();
	t->getAccessibleContext();
	t->isFocusTraversable();
	t->setEnabled(false);
	t->setEnabled(true);
	t->requestFocus();
	t->requestFocusInWindow();
	t->getPreferredSize();
	t->getMaximumSize();
	t->getMinimumSize();
	t->contains(1, 2);
	$var($Component, c1, t->add(static_cast<$Component*>($$new($HeadlessJTree$2))));
	$var($Component, c2, t->add(static_cast<$Component*>($$new($HeadlessJTree$3))));
	$var($Component, c3, t->add(static_cast<$Component*>($$new($HeadlessJTree$4))));
	$var($Insets, ins, t->getInsets());
	t->getAlignmentY();
	t->getAlignmentX();
	t->getGraphics();
	t->setVisible(false);
	t->setVisible(true);
	$init($Color);
	t->setForeground($Color::red);
	t->setBackground($Color::red);
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
					t->setFont(f1);
					t->setFont(f2);
					t->setFont(f3);
					t->setFont(f4);
					t->getFontMetrics(f1);
					t->getFontMetrics(f2);
					t->getFontMetrics(f3);
					t->getFontMetrics(f4);
				}
			}
		}
	}
	t->enable();
	t->disable();
	t->reshape(10, 10, 10, 10);
	t->getBounds($$new($Rectangle, 1, 1, 1, 1));
	t->getSize($$new($Dimension, 1, 2));
	t->getLocation($$new($Point, 1, 2));
	t->getX();
	t->getY();
	t->getWidth();
	t->getHeight();
	t->isOpaque();
	t->isValidateRoot();
	t->isOptimizedDrawingEnabled();
	t->isDoubleBuffered();
	t->getComponentCount();
	t->countComponents();
	t->getComponent(1);
	t->getComponent(2);
	$var($ComponentArray, cs, t->getComponents());
	t->getLayout();
	t->setLayout($$new($FlowLayout));
	t->doLayout();
	t->layout();
	t->invalidate();
	t->validate();
	t->remove(0);
	t->remove(c2);
	t->removeAll();
	t->preferredSize();
	t->minimumSize();
	t->getComponentAt(1, 2);
	t->locate(1, 2);
	t->getComponentAt($$new($Point, 1, 2));
	t->isFocusCycleRoot($$new($Container));
	t->transferFocusBackward();
	t->setName("goober"_s);
	t->getName();
	t->getParent();
	t->getGraphicsConfiguration();
	t->getTreeLock();
	t->getToolkit();
	t->isValid();
	t->isDisplayable();
	t->isVisible();
	t->isShowing();
	t->isEnabled();
	t->enable(false);
	t->enable(true);
	t->enableInputMethods(false);
	t->enableInputMethods(true);
	t->show();
	t->show(false);
	t->show(true);
	t->hide();
	t->getForeground();
	t->isForegroundSet();
	t->getBackground();
	t->isBackgroundSet();
	t->getFont();
	t->isFontSet();
	$var($Container, c, $new($Container));
	c->add(static_cast<$Component*>(t));
	t->getLocale();
	{
		$var($LocaleArray, arr$, $Locale::getAvailableLocales());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locale, locale, arr$->get(i$));
			t->setLocale(locale);
		}
	}
	t->getColorModel();
	t->getLocation();
	bool exceptions = false;
	try {
		t->getLocationOnScreen();
	} catch ($IllegalComponentStateException&) {
		$var($IllegalComponentStateException, e, $catch());
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "IllegalComponentStateException did not occur when expected"_s);
	}
	t->location();
	t->setLocation(1, 2);
	t->move(1, 2);
	t->setLocation($$new($Point, 1, 2));
	t->getSize();
	t->size();
	t->setSize(1, 32);
	t->resize(1, 32);
	t->setSize($$new($Dimension, 1, 32));
	t->resize($$new($Dimension, 1, 32));
	t->getBounds();
	t->bounds();
	t->setBounds(10, 10, 10, 10);
	t->setBounds($$new($Rectangle, 10, 10, 10, 10));
	t->isLightweight();
	t->setCursor($$new($Cursor, $Cursor::CROSSHAIR_CURSOR));
	t->getCursor();
	t->isCursorSet();
	t->inside(1, 2);
	t->contains($$new($Point, 1, 2));
	t->isFocusable();
	t->setFocusable(true);
	t->setFocusable(false);
	t->transferFocus();
	t->getFocusCycleRootAncestor();
	t->nextFocus();
	t->transferFocusUpCycle();
	t->hasFocus();
	t->isFocusOwner();
	t->toString();
	$init($ComponentOrientation);
	t->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
	t->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
	t->setComponentOrientation($ComponentOrientation::UNKNOWN);
	t->getComponentOrientation();
}

HeadlessJTree::HeadlessJTree() {
}

$Class* HeadlessJTree::load$($String* name, bool initialize) {
	$loadClass(HeadlessJTree, name, initialize, &_HeadlessJTree_ClassInfo_, allocate$HeadlessJTree);
	return class$;
}

$Class* HeadlessJTree::class$ = nullptr;