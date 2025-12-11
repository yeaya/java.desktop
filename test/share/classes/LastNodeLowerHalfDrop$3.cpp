#include <LastNodeLowerHalfDrop$3.h>

#include <LastNodeLowerHalfDrop.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/geom/RectangularShape.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTree.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/TreeNode.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $LastNodeLowerHalfDrop = ::LastNodeLowerHalfDrop;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JTree = ::javax::swing::JTree;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $TreePath = ::javax::swing::tree::TreePath;

$FieldInfo _LastNodeLowerHalfDrop$3_FieldInfo_[] = {
	{"val$shift", "F", nullptr, $FINAL | $SYNTHETIC, $field(LastNodeLowerHalfDrop$3, val$shift)},
	{"val$drop", "Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $FINAL | $SYNTHETIC, $field(LastNodeLowerHalfDrop$3, val$drop)},
	{"val$drag", "Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $FINAL | $SYNTHETIC, $field(LastNodeLowerHalfDrop$3, val$drag)},
	{}
};

$MethodInfo _LastNodeLowerHalfDrop$3_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/tree/DefaultMutableTreeNode;Ljavax/swing/tree/DefaultMutableTreeNode;F)V", "()V", 0, $method(static_cast<void(LastNodeLowerHalfDrop$3::*)($DefaultMutableTreeNode*,$DefaultMutableTreeNode*,float)>(&LastNodeLowerHalfDrop$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _LastNodeLowerHalfDrop$3_EnclosingMethodInfo_ = {
	"LastNodeLowerHalfDrop",
	"testCase",
	"(Ljavax/swing/tree/DefaultMutableTreeNode;Ljavax/swing/tree/DefaultMutableTreeNode;F)V"
};

$InnerClassInfo _LastNodeLowerHalfDrop$3_InnerClassesInfo_[] = {
	{"LastNodeLowerHalfDrop$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LastNodeLowerHalfDrop$3_ClassInfo_ = {
	$ACC_SUPER,
	"LastNodeLowerHalfDrop$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_LastNodeLowerHalfDrop$3_FieldInfo_,
	_LastNodeLowerHalfDrop$3_MethodInfo_,
	nullptr,
	&_LastNodeLowerHalfDrop$3_EnclosingMethodInfo_,
	_LastNodeLowerHalfDrop$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LastNodeLowerHalfDrop"
};

$Object* allocate$LastNodeLowerHalfDrop$3($Class* clazz) {
	return $of($alloc(LastNodeLowerHalfDrop$3));
}

void LastNodeLowerHalfDrop$3::init$($DefaultMutableTreeNode* val$drag, $DefaultMutableTreeNode* val$drop, float val$shift) {
	$set(this, val$drag, val$drag);
	$set(this, val$drop, val$drop);
	this->val$shift = val$shift;
}

void LastNodeLowerHalfDrop$3::run() {
	$useLocalCurrentObjectStackCache();
	$init($LastNodeLowerHalfDrop);
	$var($Rectangle, rectDrag, $nc($LastNodeLowerHalfDrop::jTree)->getPathBounds($$new($TreePath, $($nc(this->val$drag)->getPath()))));
	int32_t var$0 = $cast(int32_t, $nc(rectDrag)->getCenterX());
	$assignStatic($LastNodeLowerHalfDrop::dragPoint, $new($Point, var$0, $cast(int32_t, rectDrag->getCenterY())));
	$SwingUtilities::convertPointToScreen($LastNodeLowerHalfDrop::dragPoint, $LastNodeLowerHalfDrop::jTree);
	$var($Rectangle, rectDrop, $nc($LastNodeLowerHalfDrop::jTree)->getPathBounds($$new($TreePath, $($nc(this->val$drop)->getPath()))));
	$assignStatic($LastNodeLowerHalfDrop::dropPoint, $new($Point, $nc(rectDrop)->x + 5, $cast(int32_t, (rectDrop->getCenterY() + this->val$shift * rectDrop->height))));
	$SwingUtilities::convertPointToScreen($LastNodeLowerHalfDrop::dropPoint, $LastNodeLowerHalfDrop::jTree);
}

LastNodeLowerHalfDrop$3::LastNodeLowerHalfDrop$3() {
}

$Class* LastNodeLowerHalfDrop$3::load$($String* name, bool initialize) {
	$loadClass(LastNodeLowerHalfDrop$3, name, initialize, &_LastNodeLowerHalfDrop$3_ClassInfo_, allocate$LastNodeLowerHalfDrop$3);
	return class$;
}

$Class* LastNodeLowerHalfDrop$3::class$ = nullptr;