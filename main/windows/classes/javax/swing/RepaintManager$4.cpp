#include <javax/swing/RepaintManager$4.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/RepaintManager$PaintManager.h>
#include <javax/swing/RepaintManager.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $JComponent = ::javax::swing::JComponent;
using $RepaintManager = ::javax::swing::RepaintManager;
using $RepaintManager$PaintManager = ::javax::swing::RepaintManager$PaintManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;

namespace javax {
	namespace swing {

$FieldInfo _RepaintManager$4_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/RepaintManager;", nullptr, $FINAL | $SYNTHETIC, $field(RepaintManager$4, this$0)},
	{"val$count", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $FINAL | $SYNTHETIC, $field(RepaintManager$4, val$count)},
	{"val$i", "I", nullptr, $FINAL | $SYNTHETIC, $field(RepaintManager$4, val$i)},
	{"val$roots", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(RepaintManager$4, val$roots)},
	{"val$dirtyComponent", "Ljava/awt/Component;", nullptr, $FINAL | $SYNTHETIC, $field(RepaintManager$4, val$dirtyComponent)},
	{"val$tmpDirtyComponents", "Ljava/util/Map;", nullptr, $FINAL | $SYNTHETIC, $field(RepaintManager$4, val$tmpDirtyComponents)},
	{}
};

$MethodInfo _RepaintManager$4_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/RepaintManager;Ljava/util/Map;Ljava/awt/Component;Ljava/util/List;ILjava/util/concurrent/atomic/AtomicInteger;)V", "()V", 0, $method(static_cast<void(RepaintManager$4::*)($RepaintManager*,$Map*,$Component*,$List*,int32_t,$AtomicInteger*)>(&RepaintManager$4::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _RepaintManager$4_EnclosingMethodInfo_ = {
	"javax.swing.RepaintManager",
	"paintDirtyRegions",
	"(Ljava/util/Map;)V"
};

$InnerClassInfo _RepaintManager$4_InnerClassesInfo_[] = {
	{"javax.swing.RepaintManager$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RepaintManager$4_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.RepaintManager$4",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_RepaintManager$4_FieldInfo_,
	_RepaintManager$4_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_RepaintManager$4_EnclosingMethodInfo_,
	_RepaintManager$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.RepaintManager"
};

$Object* allocate$RepaintManager$4($Class* clazz) {
	return $of($alloc(RepaintManager$4));
}

void RepaintManager$4::init$($RepaintManager* this$0, $Map* val$tmpDirtyComponents, $Component* val$dirtyComponent, $List* val$roots, int32_t val$i, $AtomicInteger* val$count) {
	$set(this, this$0, this$0);
	$set(this, val$tmpDirtyComponents, val$tmpDirtyComponents);
	$set(this, val$dirtyComponent, val$dirtyComponent);
	$set(this, val$roots, val$roots);
	this->val$i = val$i;
	$set(this, val$count, val$count);
}

$Object* RepaintManager$4::run() {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, rect, $cast($Rectangle, $nc(this->val$tmpDirtyComponents)->get(this->val$dirtyComponent)));
	if (rect == nullptr) {
		return $of(nullptr);
	}
	int32_t localBoundsH = $nc(this->val$dirtyComponent)->getHeight();
	int32_t localBoundsW = $nc(this->val$dirtyComponent)->getWidth();
	$SwingUtilities::computeIntersection(0, 0, localBoundsW, localBoundsH, rect);
	if ($instanceOf($JComponent, this->val$dirtyComponent)) {
		$nc(($cast($JComponent, this->val$dirtyComponent)))->paintImmediately($nc(rect)->x, rect->y, rect->width, rect->height);
	} else if ($nc(this->val$dirtyComponent)->isShowing()) {
		$var($Graphics, g, $JComponent::safelyGetGraphics(this->val$dirtyComponent, this->val$dirtyComponent));
		if (g != nullptr) {
			g->setClip($nc(rect)->x, rect->y, rect->width, rect->height);
			{
				$var($Throwable, var$0, nullptr);
				try {
					$nc(this->val$dirtyComponent)->paint(g);
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} /*finally*/ {
					g->dispose();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
	if (this->this$0->repaintRoot != nullptr) {
		this->this$0->adjustRoots(this->this$0->repaintRoot, this->val$roots, this->val$i + 1);
		$nc(this->val$count)->set($nc(this->val$roots)->size());
		$nc(this->this$0->paintManager)->isRepaintingRoot$ = true;
		int32_t var$1 = $nc(this->this$0->repaintRoot)->getWidth();
		$nc(this->this$0->repaintRoot)->paintImmediately(0, 0, var$1, $nc(this->this$0->repaintRoot)->getHeight());
		$nc(this->this$0->paintManager)->isRepaintingRoot$ = false;
		$set(this->this$0, repaintRoot, nullptr);
	}
	return $of(nullptr);
}

RepaintManager$4::RepaintManager$4() {
}

$Class* RepaintManager$4::load$($String* name, bool initialize) {
	$loadClass(RepaintManager$4, name, initialize, &_RepaintManager$4_ClassInfo_, allocate$RepaintManager$4);
	return class$;
}

$Class* RepaintManager$4::class$ = nullptr;

	} // swing
} // javax