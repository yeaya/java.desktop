#include <com/sun/imageio/plugins/common/PaletteBuilder$ColorNode.h>

#include <com/sun/imageio/plugins/common/PaletteBuilder.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PaletteBuilder$ColorNodeArray = $Array<::com::sun::imageio::plugins::common::PaletteBuilder$ColorNode>;
using $PaletteBuilder = ::com::sun::imageio::plugins::common::PaletteBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

$FieldInfo _PaletteBuilder$ColorNode_FieldInfo_[] = {
	{"this$0", "Lcom/sun/imageio/plugins/common/PaletteBuilder;", nullptr, $FINAL | $SYNTHETIC, $field(PaletteBuilder$ColorNode, this$0)},
	{"isLeaf", "Z", nullptr, $PUBLIC, $field(PaletteBuilder$ColorNode, isLeaf)},
	{"childCount", "I", nullptr, $PUBLIC, $field(PaletteBuilder$ColorNode, childCount)},
	{"children", "[Lcom/sun/imageio/plugins/common/PaletteBuilder$ColorNode;", nullptr, 0, $field(PaletteBuilder$ColorNode, children)},
	{"colorCount", "I", nullptr, $PUBLIC, $field(PaletteBuilder$ColorNode, colorCount)},
	{"red", "J", nullptr, $PUBLIC, $field(PaletteBuilder$ColorNode, red)},
	{"blue", "J", nullptr, $PUBLIC, $field(PaletteBuilder$ColorNode, blue)},
	{"green", "J", nullptr, $PUBLIC, $field(PaletteBuilder$ColorNode, green)},
	{"paletteIndex", "I", nullptr, $PUBLIC, $field(PaletteBuilder$ColorNode, paletteIndex)},
	{"level", "I", nullptr, $PUBLIC, $field(PaletteBuilder$ColorNode, level)},
	{"nextReducible", "Lcom/sun/imageio/plugins/common/PaletteBuilder$ColorNode;", nullptr, 0, $field(PaletteBuilder$ColorNode, nextReducible)},
	{}
};

$MethodInfo _PaletteBuilder$ColorNode_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/imageio/plugins/common/PaletteBuilder;)V", nullptr, $PUBLIC, $method(static_cast<void(PaletteBuilder$ColorNode::*)($PaletteBuilder*)>(&PaletteBuilder$ColorNode::init$))},
	{"getLeafChildCount", "()I", nullptr, $PUBLIC},
	{"getRGB", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PaletteBuilder$ColorNode_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.common.PaletteBuilder$ColorNode", "com.sun.imageio.plugins.common.PaletteBuilder", "ColorNode", $PROTECTED},
	{}
};

$ClassInfo _PaletteBuilder$ColorNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.common.PaletteBuilder$ColorNode",
	"java.lang.Object",
	nullptr,
	_PaletteBuilder$ColorNode_FieldInfo_,
	_PaletteBuilder$ColorNode_MethodInfo_,
	nullptr,
	nullptr,
	_PaletteBuilder$ColorNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.common.PaletteBuilder"
};

$Object* allocate$PaletteBuilder$ColorNode($Class* clazz) {
	return $of($alloc(PaletteBuilder$ColorNode));
}

void PaletteBuilder$ColorNode::init$($PaletteBuilder* this$0) {
	$set(this, this$0, this$0);
	this->isLeaf = false;
	this->level = 0;
	this->childCount = 0;
	$set(this, children, $new($PaletteBuilder$ColorNodeArray, 8));
	for (int32_t i = 0; i < 8; ++i) {
		$nc(this->children)->set(i, nullptr);
	}
	this->colorCount = 0;
	this->red = (this->green = (this->blue = 0));
	this->paletteIndex = 0;
}

int32_t PaletteBuilder$ColorNode::getLeafChildCount() {
	if (this->isLeaf) {
		return 0;
	}
	int32_t cnt = 0;
	for (int32_t i = 0; i < $nc(this->children)->length; ++i) {
		if ($nc(this->children)->get(i) != nullptr) {
			if ($nc($nc(this->children)->get(i))->isLeaf) {
				++cnt;
			} else {
				cnt += $nc($nc(this->children)->get(i))->getLeafChildCount();
			}
		}
	}
	return cnt;
}

int32_t PaletteBuilder$ColorNode::getRGB() {
	int32_t r = $div((int32_t)this->red, this->colorCount);
	int32_t g = $div((int32_t)this->green, this->colorCount);
	int32_t b = $div((int32_t)this->blue, this->colorCount);
	int32_t c = (((255 << 24) | (((int32_t)(255 & (uint32_t)r)) << 16)) | (((int32_t)(255 & (uint32_t)g)) << 8)) | ((int32_t)(255 & (uint32_t)b));
	return c;
}

PaletteBuilder$ColorNode::PaletteBuilder$ColorNode() {
}

$Class* PaletteBuilder$ColorNode::load$($String* name, bool initialize) {
	$loadClass(PaletteBuilder$ColorNode, name, initialize, &_PaletteBuilder$ColorNode_ClassInfo_, allocate$PaletteBuilder$ColorNode);
	return class$;
}

$Class* PaletteBuilder$ColorNode::class$ = nullptr;

				} // common
			} // plugins
		} // imageio
	} // sun
} // com