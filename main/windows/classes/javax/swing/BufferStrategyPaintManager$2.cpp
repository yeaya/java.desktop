#include <javax/swing/BufferStrategyPaintManager$2.h>

#include <javax/swing/BufferStrategyPaintManager.h>
#include <javax/swing/JRootPane.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $BufferStrategyPaintManager = ::javax::swing::BufferStrategyPaintManager;
using $JRootPane = ::javax::swing::JRootPane;

namespace javax {
	namespace swing {

$FieldInfo _BufferStrategyPaintManager$2_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/BufferStrategyPaintManager;", nullptr, $FINAL | $SYNTHETIC, $field(BufferStrategyPaintManager$2, this$0)},
	{"val$rootPane", "Ljavax/swing/JRootPane;", nullptr, $FINAL | $SYNTHETIC, $field(BufferStrategyPaintManager$2, val$rootPane)},
	{}
};

$MethodInfo _BufferStrategyPaintManager$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/BufferStrategyPaintManager;Ljavax/swing/JRootPane;)V", "()V", 0, $method(static_cast<void(BufferStrategyPaintManager$2::*)($BufferStrategyPaintManager*,$JRootPane*)>(&BufferStrategyPaintManager$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BufferStrategyPaintManager$2_EnclosingMethodInfo_ = {
	"javax.swing.BufferStrategyPaintManager",
	"doubleBufferingChanged",
	"(Ljavax/swing/JRootPane;)V"
};

$InnerClassInfo _BufferStrategyPaintManager$2_InnerClassesInfo_[] = {
	{"javax.swing.BufferStrategyPaintManager$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BufferStrategyPaintManager$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.BufferStrategyPaintManager$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_BufferStrategyPaintManager$2_FieldInfo_,
	_BufferStrategyPaintManager$2_MethodInfo_,
	nullptr,
	&_BufferStrategyPaintManager$2_EnclosingMethodInfo_,
	_BufferStrategyPaintManager$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.BufferStrategyPaintManager"
};

$Object* allocate$BufferStrategyPaintManager$2($Class* clazz) {
	return $of($alloc(BufferStrategyPaintManager$2));
}

void BufferStrategyPaintManager$2::init$($BufferStrategyPaintManager* this$0, $JRootPane* val$rootPane) {
	$set(this, this$0, this$0);
	$set(this, val$rootPane, val$rootPane);
}

void BufferStrategyPaintManager$2::run() {
	this->this$0->doubleBufferingChanged0(this->val$rootPane);
}

BufferStrategyPaintManager$2::BufferStrategyPaintManager$2() {
}

$Class* BufferStrategyPaintManager$2::load$($String* name, bool initialize) {
	$loadClass(BufferStrategyPaintManager$2, name, initialize, &_BufferStrategyPaintManager$2_ClassInfo_, allocate$BufferStrategyPaintManager$2);
	return class$;
}

$Class* BufferStrategyPaintManager$2::class$ = nullptr;

	} // swing
} // javax