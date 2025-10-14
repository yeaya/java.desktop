#include <javax/swing/text/AbstractDocument$AttributeContext.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _AbstractDocument$AttributeContext_MethodInfo_[] = {
	{"addAttribute", "(Ljavax/swing/text/AttributeSet;Ljava/lang/Object;Ljava/lang/Object;)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC | $ABSTRACT},
	{"addAttributes", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/AttributeSet;)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC | $ABSTRACT},
	{"getEmptySet", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC | $ABSTRACT},
	{"reclaim", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeAttribute", "(Ljavax/swing/text/AttributeSet;Ljava/lang/Object;)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC | $ABSTRACT},
	{"removeAttributes", "(Ljavax/swing/text/AttributeSet;Ljava/util/Enumeration;)Ljavax/swing/text/AttributeSet;", "(Ljavax/swing/text/AttributeSet;Ljava/util/Enumeration<*>;)Ljavax/swing/text/AttributeSet;", $PUBLIC | $ABSTRACT},
	{"removeAttributes", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/AttributeSet;)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AbstractDocument$AttributeContext_InnerClassesInfo_[] = {
	{"javax.swing.text.AbstractDocument$AttributeContext", "javax.swing.text.AbstractDocument", "AttributeContext", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AbstractDocument$AttributeContext_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.text.AbstractDocument$AttributeContext",
	nullptr,
	nullptr,
	nullptr,
	_AbstractDocument$AttributeContext_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractDocument$AttributeContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.AbstractDocument"
};

$Object* allocate$AbstractDocument$AttributeContext($Class* clazz) {
	return $of($alloc(AbstractDocument$AttributeContext));
}

$Class* AbstractDocument$AttributeContext::load$($String* name, bool initialize) {
	$loadClass(AbstractDocument$AttributeContext, name, initialize, &_AbstractDocument$AttributeContext_ClassInfo_, allocate$AbstractDocument$AttributeContext);
	return class$;
}

$Class* AbstractDocument$AttributeContext::class$ = nullptr;

		} // text
	} // swing
} // javax