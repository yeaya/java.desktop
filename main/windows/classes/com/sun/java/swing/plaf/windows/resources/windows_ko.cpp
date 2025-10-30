#include <com/sun/java/swing/plaf/windows/resources/windows_ko.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						namespace resources {

$MethodInfo _windows_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(windows_ko::*)()>(&windows_ko::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _windows_ko_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.resources.windows_ko",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_windows_ko_MethodInfo_
};

$Object* allocate$windows_ko($Class* clazz) {
	return $of($alloc(windows_ko));
}

void windows_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* windows_ko::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("FileChooser.detailsViewActionLabel.textAndMnemonic"_s),
			$of(u"\uc138\ubd80\uc815\ubcf4"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.detailsViewButtonAccessibleName"_s),
			$of(u"\uc138\ubd80\uc815\ubcf4"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.detailsViewButtonToolTip.textAndMnemonic"_s),
			$of(u"\uc138\ubd80\uc815\ubcf4"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileAttrHeader.textAndMnemonic"_s),
			$of(u"\uc18d\uc131"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileDateHeader.textAndMnemonic"_s),
			$of(u"\uc218\uc815 \ub0a0\uc9dc"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileNameHeader.textAndMnemonic"_s),
			$of(u"\uc774\ub984"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileNameLabel.textAndMnemonic"_s),
			$of(u"\ud30c\uc77c \uc774\ub984(&N):"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileSizeHeader.textAndMnemonic"_s),
			$of(u"\ud06c\uae30"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileTypeHeader.textAndMnemonic"_s),
			$of(u"\uc720\ud615"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filesOfTypeLabel.textAndMnemonic"_s),
			$of(u"\ud30c\uc77c \uc720\ud615(&T):"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.folderNameLabel.textAndMnemonic"_s),
			$of(u"\ud3f4\ub354 \uc774\ub984(&N):"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.homeFolderAccessibleName"_s),
			$of(u"\ud648"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.homeFolderToolTip.textAndMnemonic"_s),
			$of(u"\ud648"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.listViewActionLabel.textAndMnemonic"_s),
			$of(u"\ubaa9\ub85d"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.listViewButtonAccessibleName"_s),
			$of(u"\ubaa9\ub85d"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.listViewButtonToolTip.textAndMnemonic"_s),
			$of(u"\ubaa9\ub85d"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.lookInLabel.textAndMnemonic"_s),
			$of(u"\ucc3e\ub294 \uc704\uce58(&I):"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderAccessibleName"_s),
			$of(u"\uc0c8 \ud3f4\ub354"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderActionLabel.textAndMnemonic"_s),
			$of(u"\uc0c8 \ud3f4\ub354"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderToolTip.textAndMnemonic"_s),
			$of(u"\uc0c8 \ud3f4\ub354 \uc0dd\uc131"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.refreshActionLabel.textAndMnemonic"_s),
			$of(u"\uc0c8\ub85c\uace0\uce68"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveInLabel.textAndMnemonic"_s),
			$of(u"\uc800\uc7a5 \uc704\uce58:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.upFolderAccessibleName"_s),
			$of(u"\uc704\ub85c"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.upFolderToolTip.textAndMnemonic"_s),
			$of(u"\ud55c \ub808\ubca8 \uc704\ub85c"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.viewMenuButtonAccessibleName"_s),
			$of(u"\ubcf4\uae30 \uba54\ub274"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.viewMenuButtonToolTipText"_s),
			$of(u"\ubcf4\uae30 \uba54\ub274"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.viewMenuLabel.textAndMnemonic"_s),
			$of(u"\ubcf4\uae30"_s)
		})
	});
}

windows_ko::windows_ko() {
}

$Class* windows_ko::load$($String* name, bool initialize) {
	$loadClass(windows_ko, name, initialize, &_windows_ko_ClassInfo_, allocate$windows_ko);
	return class$;
}

$Class* windows_ko::class$ = nullptr;

						} // resources
					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com