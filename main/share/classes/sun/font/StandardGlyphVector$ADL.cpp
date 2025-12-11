#include <sun/font/StandardGlyphVector$ADL.h>

#include <java/lang/StringBuffer.h>
#include <sun/font/StandardGlyphVector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

namespace sun {
	namespace font {

$FieldInfo _StandardGlyphVector$ADL_FieldInfo_[] = {
	{"ascentX", "F", nullptr, $PUBLIC, $field(StandardGlyphVector$ADL, ascentX)},
	{"ascentY", "F", nullptr, $PUBLIC, $field(StandardGlyphVector$ADL, ascentY)},
	{"descentX", "F", nullptr, $PUBLIC, $field(StandardGlyphVector$ADL, descentX)},
	{"descentY", "F", nullptr, $PUBLIC, $field(StandardGlyphVector$ADL, descentY)},
	{"leadingX", "F", nullptr, $PUBLIC, $field(StandardGlyphVector$ADL, leadingX)},
	{"leadingY", "F", nullptr, $PUBLIC, $field(StandardGlyphVector$ADL, leadingY)},
	{}
};

$MethodInfo _StandardGlyphVector$ADL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StandardGlyphVector$ADL::*)()>(&StandardGlyphVector$ADL::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toStringBuffer", "(Ljava/lang/StringBuffer;)Ljava/lang/StringBuffer;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _StandardGlyphVector$ADL_InnerClassesInfo_[] = {
	{"sun.font.StandardGlyphVector$ADL", "sun.font.StandardGlyphVector", "ADL", $STATIC},
	{}
};

$ClassInfo _StandardGlyphVector$ADL_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.StandardGlyphVector$ADL",
	"java.lang.Object",
	nullptr,
	_StandardGlyphVector$ADL_FieldInfo_,
	_StandardGlyphVector$ADL_MethodInfo_,
	nullptr,
	nullptr,
	_StandardGlyphVector$ADL_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.StandardGlyphVector"
};

$Object* allocate$StandardGlyphVector$ADL($Class* clazz) {
	return $of($alloc(StandardGlyphVector$ADL));
}

void StandardGlyphVector$ADL::init$() {
}

$String* StandardGlyphVector$ADL::toString() {
	return $nc($(toStringBuffer(nullptr)))->toString();
}

$StringBuffer* StandardGlyphVector$ADL::toStringBuffer($StringBuffer* result$renamed) {
	$var($StringBuffer, result, result$renamed);
	if (result == nullptr) {
		$assign(result, $new($StringBuffer));
	}
	$nc(result)->append("ax: "_s);
	result->append(this->ascentX);
	result->append(" ay: "_s);
	result->append(this->ascentY);
	result->append(" dx: "_s);
	result->append(this->descentX);
	result->append(" dy: "_s);
	result->append(this->descentY);
	result->append(" lx: "_s);
	result->append(this->leadingX);
	result->append(" ly: "_s);
	result->append(this->leadingY);
	return result;
}

StandardGlyphVector$ADL::StandardGlyphVector$ADL() {
}

$Class* StandardGlyphVector$ADL::load$($String* name, bool initialize) {
	$loadClass(StandardGlyphVector$ADL, name, initialize, &_StandardGlyphVector$ADL_ClassInfo_, allocate$StandardGlyphVector$ADL);
	return class$;
}

$Class* StandardGlyphVector$ADL::class$ = nullptr;

	} // font
} // sun