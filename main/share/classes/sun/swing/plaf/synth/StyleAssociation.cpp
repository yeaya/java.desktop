#include <sun/swing/plaf/synth/StyleAssociation.h>

#include <java/lang/CharSequence.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _StyleAssociation_FieldInfo_[] = {
	{"_style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(StyleAssociation, _style)},
	{"_pattern", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE, $field(StyleAssociation, _pattern)},
	{"_matcher", "Ljava/util/regex/Matcher;", nullptr, $PRIVATE, $field(StyleAssociation, _matcher)},
	{"_id", "I", nullptr, $PRIVATE, $field(StyleAssociation, _id)},
	{}
};

$MethodInfo _StyleAssociation_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljavax/swing/plaf/synth/SynthStyle;I)V", nullptr, $PRIVATE, $method(static_cast<void(StyleAssociation::*)($String*,$SynthStyle*,int32_t)>(&StyleAssociation::init$)), "java.util.regex.PatternSyntaxException"},
	{"createStyleAssociation", "(Ljava/lang/String;Ljavax/swing/plaf/synth/SynthStyle;)Lsun/swing/plaf/synth/StyleAssociation;", nullptr, $PUBLIC | $STATIC, $method(static_cast<StyleAssociation*(*)($String*,$SynthStyle*)>(&StyleAssociation::createStyleAssociation)), "java.util.regex.PatternSyntaxException"},
	{"createStyleAssociation", "(Ljava/lang/String;Ljavax/swing/plaf/synth/SynthStyle;I)Lsun/swing/plaf/synth/StyleAssociation;", nullptr, $PUBLIC | $STATIC, $method(static_cast<StyleAssociation*(*)($String*,$SynthStyle*,int32_t)>(&StyleAssociation::createStyleAssociation)), "java.util.regex.PatternSyntaxException"},
	{"getID", "()I", nullptr, $PUBLIC},
	{"getStyle", "()Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PUBLIC},
	{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"matches", "(Ljava/lang/CharSequence;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$ClassInfo _StyleAssociation_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.swing.plaf.synth.StyleAssociation",
	"java.lang.Object",
	nullptr,
	_StyleAssociation_FieldInfo_,
	_StyleAssociation_MethodInfo_
};

$Object* allocate$StyleAssociation($Class* clazz) {
	return $of($alloc(StyleAssociation));
}

StyleAssociation* StyleAssociation::createStyleAssociation($String* text, $SynthStyle* style) {
	return createStyleAssociation(text, style, 0);
}

StyleAssociation* StyleAssociation::createStyleAssociation($String* text, $SynthStyle* style, int32_t id) {
	return $new(StyleAssociation, text, style, id);
}

void StyleAssociation::init$($String* text, $SynthStyle* style, int32_t id) {
	$set(this, _style, style);
	$set(this, _pattern, $Pattern::compile(text));
	this->_id = id;
}

int32_t StyleAssociation::getID() {
	return this->_id;
}

bool StyleAssociation::matches($CharSequence* path) {
	$synchronized(this) {
		if (this->_matcher == nullptr) {
			$set(this, _matcher, $nc(this->_pattern)->matcher(path));
		} else {
			$nc(this->_matcher)->reset(path);
		}
		return $nc(this->_matcher)->matches();
	}
}

$String* StyleAssociation::getText() {
	return $nc(this->_pattern)->pattern();
}

$SynthStyle* StyleAssociation::getStyle() {
	return this->_style;
}

StyleAssociation::StyleAssociation() {
}

$Class* StyleAssociation::load$($String* name, bool initialize) {
	$loadClass(StyleAssociation, name, initialize, &_StyleAssociation_ClassInfo_, allocate$StyleAssociation);
	return class$;
}

$Class* StyleAssociation::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun