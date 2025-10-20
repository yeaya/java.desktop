#include <sun/swing/plaf/synth/SynthFileChooserUI$GlobFilter.h>

#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <sun/swing/plaf/synth/SynthFileChooserUI.h>
#include <jcpp.h>

#undef CASE_INSENSITIVE

using $File = ::java::io::File;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $FileFilter = ::javax::swing::filechooser::FileFilter;
using $SynthFileChooserUI = ::sun::swing::plaf::synth::SynthFileChooserUI;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthFileChooserUI$GlobFilter_FieldInfo_[] = {
	{"this$0", "Lsun/swing/plaf/synth/SynthFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthFileChooserUI$GlobFilter, this$0)},
	{"pattern", "Ljava/util/regex/Pattern;", nullptr, 0, $field(SynthFileChooserUI$GlobFilter, pattern)},
	{"globPattern", "Ljava/lang/String;", nullptr, 0, $field(SynthFileChooserUI$GlobFilter, globPattern)},
	{}
};

$MethodInfo _SynthFileChooserUI$GlobFilter_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/plaf/synth/SynthFileChooserUI;)V", nullptr, 0, $method(static_cast<void(SynthFileChooserUI$GlobFilter::*)($SynthFileChooserUI*)>(&SynthFileChooserUI$GlobFilter::init$))},
	{"accept", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setPattern", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthFileChooserUI$GlobFilter_InnerClassesInfo_[] = {
	{"sun.swing.plaf.synth.SynthFileChooserUI$GlobFilter", "sun.swing.plaf.synth.SynthFileChooserUI", "GlobFilter", 0},
	{}
};

$ClassInfo _SynthFileChooserUI$GlobFilter_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.plaf.synth.SynthFileChooserUI$GlobFilter",
	"javax.swing.filechooser.FileFilter",
	nullptr,
	_SynthFileChooserUI$GlobFilter_FieldInfo_,
	_SynthFileChooserUI$GlobFilter_MethodInfo_,
	nullptr,
	nullptr,
	_SynthFileChooserUI$GlobFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.plaf.synth.SynthFileChooserUI"
};

$Object* allocate$SynthFileChooserUI$GlobFilter($Class* clazz) {
	return $of($alloc(SynthFileChooserUI$GlobFilter));
}

void SynthFileChooserUI$GlobFilter::init$($SynthFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$FileFilter::init$();
}

void SynthFileChooserUI$GlobFilter::setPattern($String* globPattern) {
	$useLocalCurrentObjectStackCache();
	$var($chars, gPat, $nc(globPattern)->toCharArray());
	$var($chars, rPat, $new($chars, gPat->length * 2));
	$init($File);
	bool isWin32 = ($File::separatorChar == u'\\');
	bool inBrackets = false;
	int32_t j = 0;
	$set(this, globPattern, globPattern);
	if (isWin32) {
		int32_t len = gPat->length;
		if (globPattern->endsWith("*.*"_s)) {
			len -= 2;
		}
		for (int32_t i = 0; i < len; ++i) {
			if (gPat->get(i) == u'*') {
				rPat->set(j++, u'.');
			}
			rPat->set(j++, gPat->get(i));
		}
	} else {
		for (int32_t i = 0; i < gPat->length; ++i) {
			switch (gPat->get(i)) {
			case u'*':
				{
					if (!inBrackets) {
						rPat->set(j++, u'.');
					}
					rPat->set(j++, u'*');
					break;
				}
			case u'?':
				{
					rPat->set(j++, inBrackets ? u'?' : u'.');
					break;
				}
			case u'[':
				{
					inBrackets = true;
					rPat->set(j++, gPat->get(i));
					if (i < gPat->length - 1) {
						switch (gPat->get(i + 1)) {
						case u'!':
							{}
						case u'^':
							{
								rPat->set(j++, u'^');
								++i;
								break;
							}
						case u']':
							{
								rPat->set(j++, gPat->get(++i));
								break;
							}
						}
					}
					break;
				}
			case u']':
				{
					rPat->set(j++, gPat->get(i));
					inBrackets = false;
					break;
				}
			case u'\\':
				{
					if (i == 0 && gPat->length > 1 && gPat->get(1) == u'~') {
						rPat->set(j++, gPat->get(++i));
					} else {
						rPat->set(j++, u'\\');
						if (i < gPat->length - 1 && "*?[]"_s->indexOf((int32_t)gPat->get(i + 1)) >= 0) {
							rPat->set(j++, gPat->get(++i));
						} else {
							rPat->set(j++, u'\\');
						}
					}
					break;
				}
			default:
				{
					if (!$Character::isLetterOrDigit(gPat->get(i))) {
						rPat->set(j++, u'\\');
					}
					rPat->set(j++, gPat->get(i));
					break;
				}
			}
		}
	}
	$set(this, pattern, $Pattern::compile($$new($String, rPat, 0, j), $Pattern::CASE_INSENSITIVE));
}

bool SynthFileChooserUI$GlobFilter::accept($File* f) {
	$useLocalCurrentObjectStackCache();
	if (f == nullptr) {
		return false;
	}
	if ($nc(f)->isDirectory()) {
		return true;
	}
	return $nc($($nc(this->pattern)->matcher($($nc(f)->getName()))))->matches();
}

$String* SynthFileChooserUI$GlobFilter::getDescription() {
	return this->globPattern;
}

SynthFileChooserUI$GlobFilter::SynthFileChooserUI$GlobFilter() {
}

$Class* SynthFileChooserUI$GlobFilter::load$($String* name, bool initialize) {
	$loadClass(SynthFileChooserUI$GlobFilter, name, initialize, &_SynthFileChooserUI$GlobFilter_ClassInfo_, allocate$SynthFileChooserUI$GlobFilter);
	return class$;
}

$Class* SynthFileChooserUI$GlobFilter::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun