#include <javax/swing/RepaintManager$DoubleBufferInfo.h>

#include <java/awt/Dimension.h>
#include <java/awt/Image.h>
#include <javax/swing/RepaintManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RepaintManager = ::javax::swing::RepaintManager;

namespace javax {
	namespace swing {

$FieldInfo _RepaintManager$DoubleBufferInfo_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/RepaintManager;", nullptr, $FINAL | $SYNTHETIC, $field(RepaintManager$DoubleBufferInfo, this$0)},
	{"image", "Ljava/awt/Image;", nullptr, $PUBLIC, $field(RepaintManager$DoubleBufferInfo, image)},
	{"size", "Ljava/awt/Dimension;", nullptr, $PUBLIC, $field(RepaintManager$DoubleBufferInfo, size)},
	{"needsReset", "Z", nullptr, $PUBLIC, $field(RepaintManager$DoubleBufferInfo, needsReset)},
	{}
};

$MethodInfo _RepaintManager$DoubleBufferInfo_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/RepaintManager;)V", nullptr, $PRIVATE, $method(static_cast<void(RepaintManager$DoubleBufferInfo::*)($RepaintManager*)>(&RepaintManager$DoubleBufferInfo::init$))},
	{}
};

$InnerClassInfo _RepaintManager$DoubleBufferInfo_InnerClassesInfo_[] = {
	{"javax.swing.RepaintManager$DoubleBufferInfo", "javax.swing.RepaintManager", "DoubleBufferInfo", $PRIVATE},
	{}
};

$ClassInfo _RepaintManager$DoubleBufferInfo_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.RepaintManager$DoubleBufferInfo",
	"java.lang.Object",
	nullptr,
	_RepaintManager$DoubleBufferInfo_FieldInfo_,
	_RepaintManager$DoubleBufferInfo_MethodInfo_,
	nullptr,
	nullptr,
	_RepaintManager$DoubleBufferInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.RepaintManager"
};

$Object* allocate$RepaintManager$DoubleBufferInfo($Class* clazz) {
	return $of($alloc(RepaintManager$DoubleBufferInfo));
}

void RepaintManager$DoubleBufferInfo::init$($RepaintManager* this$0) {
	$set(this, this$0, this$0);
	this->needsReset = false;
}

RepaintManager$DoubleBufferInfo::RepaintManager$DoubleBufferInfo() {
}

$Class* RepaintManager$DoubleBufferInfo::load$($String* name, bool initialize) {
	$loadClass(RepaintManager$DoubleBufferInfo, name, initialize, &_RepaintManager$DoubleBufferInfo_ClassInfo_, allocate$RepaintManager$DoubleBufferInfo);
	return class$;
}

$Class* RepaintManager$DoubleBufferInfo::class$ = nullptr;

	} // swing
} // javax