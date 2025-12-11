#include <sun/font/SunFontManager$8$1.h>

#include <java/io/File.h>
#include <java/util/Vector.h>
#include <sun/font/FileFont.h>
#include <sun/font/SunFontManager$8.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $FileFont = ::sun::font::FileFont;
using $SunFontManager$8 = ::sun::font::SunFontManager$8;

namespace sun {
	namespace font {

$FieldInfo _SunFontManager$8$1_FieldInfo_[] = {
	{"this$1", "Lsun/font/SunFontManager$8;", nullptr, $FINAL | $SYNTHETIC, $field(SunFontManager$8$1, this$1)},
	{}
};

$MethodInfo _SunFontManager$8$1_MethodInfo_[] = {
	{"<init>", "(Lsun/font/SunFontManager$8;)V", nullptr, 0, $method(static_cast<void(SunFontManager$8$1::*)($SunFontManager$8*)>(&SunFontManager$8$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SunFontManager$8$1_EnclosingMethodInfo_ = {
	"sun.font.SunFontManager$8",
	"run",
	"()V"
};

$InnerClassInfo _SunFontManager$8$1_InnerClassesInfo_[] = {
	{"sun.font.SunFontManager$8", nullptr, nullptr, 0},
	{"sun.font.SunFontManager$8$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SunFontManager$8$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.SunFontManager$8$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SunFontManager$8$1_FieldInfo_,
	_SunFontManager$8$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_SunFontManager$8$1_EnclosingMethodInfo_,
	_SunFontManager$8$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.SunFontManager"
};

$Object* allocate$SunFontManager$8$1($Class* clazz) {
	return $of($alloc(SunFontManager$8$1));
}

void SunFontManager$8$1::init$($SunFontManager$8* this$1) {
	$set(this, this$1, this$1);
}

$Object* SunFontManager$8$1::run() {
	for (int32_t i = 0; i < 20; ++i) {
		if ($nc($nc(this->this$1->this$0)->fontFileCache)->get(i) != nullptr) {
			try {
				$nc($nc($nc(this->this$1->this$0)->fontFileCache)->get(i))->close();
			} catch ($Exception& e) {
			}
		}
	}
	if ($nc(this->this$1->this$0)->tmpFontFiles != nullptr) {
		$var($FileArray, files, $new($FileArray, $nc($nc(this->this$1->this$0)->tmpFontFiles)->size()));
		$assign(files, $fcast($FileArray, $nc($nc(this->this$1->this$0)->tmpFontFiles)->toArray(files)));
		for (int32_t f = 0; f < $nc(files)->length; ++f) {
			try {
				$nc(files->get(f))->delete$();
			} catch ($Exception& e) {
			}
		}
	}
	return $of(nullptr);
}

SunFontManager$8$1::SunFontManager$8$1() {
}

$Class* SunFontManager$8$1::load$($String* name, bool initialize) {
	$loadClass(SunFontManager$8$1, name, initialize, &_SunFontManager$8$1_ClassInfo_, allocate$SunFontManager$8$1);
	return class$;
}

$Class* SunFontManager$8$1::class$ = nullptr;

	} // font
} // sun