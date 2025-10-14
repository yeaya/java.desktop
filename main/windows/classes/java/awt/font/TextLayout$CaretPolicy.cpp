#include <java/awt/font/TextLayout$CaretPolicy.h>

#include <java/awt/font/TextHitInfo.h>
#include <java/awt/font/TextLayout.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TextHitInfo = ::java::awt::font::TextHitInfo;
using $TextLayout = ::java::awt::font::TextLayout;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace font {

$MethodInfo _TextLayout$CaretPolicy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TextLayout$CaretPolicy::*)()>(&TextLayout$CaretPolicy::init$))},
	{"getStrongCaret", "(Ljava/awt/font/TextHitInfo;Ljava/awt/font/TextHitInfo;Ljava/awt/font/TextLayout;)Ljava/awt/font/TextHitInfo;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TextLayout$CaretPolicy_InnerClassesInfo_[] = {
	{"java.awt.font.TextLayout$CaretPolicy", "java.awt.font.TextLayout", "CaretPolicy", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TextLayout$CaretPolicy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.font.TextLayout$CaretPolicy",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TextLayout$CaretPolicy_MethodInfo_,
	nullptr,
	nullptr,
	_TextLayout$CaretPolicy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.font.TextLayout"
};

$Object* allocate$TextLayout$CaretPolicy($Class* clazz) {
	return $of($alloc(TextLayout$CaretPolicy));
}

void TextLayout$CaretPolicy::init$() {
}

$TextHitInfo* TextLayout$CaretPolicy::getStrongCaret($TextHitInfo* hit1, $TextHitInfo* hit2, $TextLayout* layout) {
	return $nc(layout)->getStrongHit(hit1, hit2);
}

TextLayout$CaretPolicy::TextLayout$CaretPolicy() {
}

$Class* TextLayout$CaretPolicy::load$($String* name, bool initialize) {
	$loadClass(TextLayout$CaretPolicy, name, initialize, &_TextLayout$CaretPolicy_ClassInfo_, allocate$TextLayout$CaretPolicy);
	return class$;
}

$Class* TextLayout$CaretPolicy::class$ = nullptr;

		} // font
	} // awt
} // java