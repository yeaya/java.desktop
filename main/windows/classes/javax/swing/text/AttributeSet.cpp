#include <javax/swing/text/AttributeSet.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <javax/swing/text/StyleConstants.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $StyleConstants = ::javax::swing::text::StyleConstants;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _AttributeSet_FieldInfo_[] = {
	{"NameAttribute", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AttributeSet, NameAttribute)},
	{"ResolveAttribute", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AttributeSet, ResolveAttribute)},
	{}
};

$MethodInfo _AttributeSet_MethodInfo_[] = {
	{"containsAttribute", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"containsAttributes", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"copyAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttribute", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributeCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributeNames", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<*>;", $PUBLIC | $ABSTRACT},
	{"getResolveParent", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC | $ABSTRACT},
	{"isDefined", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isEqual", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AttributeSet_InnerClassesInfo_[] = {
	{"javax.swing.text.AttributeSet$ParagraphAttribute", "javax.swing.text.AttributeSet", "ParagraphAttribute", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.swing.text.AttributeSet$CharacterAttribute", "javax.swing.text.AttributeSet", "CharacterAttribute", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.swing.text.AttributeSet$ColorAttribute", "javax.swing.text.AttributeSet", "ColorAttribute", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.swing.text.AttributeSet$FontAttribute", "javax.swing.text.AttributeSet", "FontAttribute", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AttributeSet_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.text.AttributeSet",
	nullptr,
	nullptr,
	_AttributeSet_FieldInfo_,
	_AttributeSet_MethodInfo_,
	nullptr,
	nullptr,
	_AttributeSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.AttributeSet$ParagraphAttribute,javax.swing.text.AttributeSet$CharacterAttribute,javax.swing.text.AttributeSet$ColorAttribute,javax.swing.text.AttributeSet$FontAttribute"
};

$Object* allocate$AttributeSet($Class* clazz) {
	return $of($alloc(AttributeSet));
}


$Object* AttributeSet::NameAttribute = nullptr;

$Object* AttributeSet::ResolveAttribute = nullptr;

void clinit$AttributeSet($Class* class$) {
	$init($StyleConstants);
	$assignStatic(AttributeSet::NameAttribute, $StyleConstants::NameAttribute);
	$assignStatic(AttributeSet::ResolveAttribute, $StyleConstants::ResolveAttribute);
}

$Class* AttributeSet::load$($String* name, bool initialize) {
	$loadClass(AttributeSet, name, initialize, &_AttributeSet_ClassInfo_, clinit$AttributeSet, allocate$AttributeSet);
	return class$;
}

$Class* AttributeSet::class$ = nullptr;

		} // text
	} // swing
} // javax