#include <javax/swing/text/DefaultStyledDocument$ElementBuffer$ElemChanges.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <javax/swing/text/DefaultStyledDocument$ElementBuffer.h>
#include <javax/swing/text/Element.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $DefaultStyledDocument$ElementBuffer = ::javax::swing::text::DefaultStyledDocument$ElementBuffer;
using $Element = ::javax::swing::text::Element;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultStyledDocument$ElementBuffer$ElemChanges_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/text/DefaultStyledDocument$ElementBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultStyledDocument$ElementBuffer$ElemChanges, this$1)},
	{"parent", "Ljavax/swing/text/Element;", nullptr, 0, $field(DefaultStyledDocument$ElementBuffer$ElemChanges, parent)},
	{"index", "I", nullptr, 0, $field(DefaultStyledDocument$ElementBuffer$ElemChanges, index)},
	{"added", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/text/Element;>;", 0, $field(DefaultStyledDocument$ElementBuffer$ElemChanges, added)},
	{"removed", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/text/Element;>;", 0, $field(DefaultStyledDocument$ElementBuffer$ElemChanges, removed)},
	{"isFracture", "Z", nullptr, 0, $field(DefaultStyledDocument$ElementBuffer$ElemChanges, isFracture)},
	{}
};

$MethodInfo _DefaultStyledDocument$ElementBuffer$ElemChanges_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/DefaultStyledDocument$ElementBuffer;Ljavax/swing/text/Element;IZ)V", nullptr, 0, $method(static_cast<void(DefaultStyledDocument$ElementBuffer$ElemChanges::*)($DefaultStyledDocument$ElementBuffer*,$Element*,int32_t,bool)>(&DefaultStyledDocument$ElementBuffer$ElemChanges::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultStyledDocument$ElementBuffer$ElemChanges_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultStyledDocument$ElementBuffer", "javax.swing.text.DefaultStyledDocument", "ElementBuffer", $PUBLIC},
	{"javax.swing.text.DefaultStyledDocument$ElementBuffer$ElemChanges", "javax.swing.text.DefaultStyledDocument$ElementBuffer", "ElemChanges", 0},
	{}
};

$ClassInfo _DefaultStyledDocument$ElementBuffer$ElemChanges_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultStyledDocument$ElementBuffer$ElemChanges",
	"java.lang.Object",
	nullptr,
	_DefaultStyledDocument$ElementBuffer$ElemChanges_FieldInfo_,
	_DefaultStyledDocument$ElementBuffer$ElemChanges_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultStyledDocument$ElementBuffer$ElemChanges_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultStyledDocument"
};

$Object* allocate$DefaultStyledDocument$ElementBuffer$ElemChanges($Class* clazz) {
	return $of($alloc(DefaultStyledDocument$ElementBuffer$ElemChanges));
}

void DefaultStyledDocument$ElementBuffer$ElemChanges::init$($DefaultStyledDocument$ElementBuffer* this$1, $Element* parent, int32_t index, bool isFracture) {
	$set(this, this$1, this$1);
	$set(this, parent, parent);
	this->index = index;
	this->isFracture = isFracture;
	$set(this, added, $new($Vector));
	$set(this, removed, $new($Vector));
}

$String* DefaultStyledDocument$ElementBuffer$ElemChanges::toString() {
	return $str({"added: "_s, this->added, "\nremoved: "_s, this->removed, "\n"_s});
}

DefaultStyledDocument$ElementBuffer$ElemChanges::DefaultStyledDocument$ElementBuffer$ElemChanges() {
}

$Class* DefaultStyledDocument$ElementBuffer$ElemChanges::load$($String* name, bool initialize) {
	$loadClass(DefaultStyledDocument$ElementBuffer$ElemChanges, name, initialize, &_DefaultStyledDocument$ElementBuffer$ElemChanges_ClassInfo_, allocate$DefaultStyledDocument$ElementBuffer$ElemChanges);
	return class$;
}

$Class* DefaultStyledDocument$ElementBuffer$ElemChanges::class$ = nullptr;

		} // text
	} // swing
} // javax