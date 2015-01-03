// PX2UIPaintManager_Win.hpp

#ifndef PX2UIPAINTMANAGER_WIN_HPP
#define PX2UIPAINTMANAGER_WIN_HPP

#include "PX2UIPaintManager.hpp"
#include "PX2UIPre.hpp"

namespace PX2
{

	class UIPaintManager_Win : public UIPaintManager
	{
	public:
		UIPaintManager_Win();
		virtual ~UIPaintManager_Win();

<<<<<<< HEAD
		static HINSTANCE GetResourceInstance();
		static HINSTANCE GetLanguageInstance();
		static void SetResourceInstance(HINSTANCE hInst);
		static void SetLanguageInstance(HINSTANCE hInst);

		void Init(HWND hWnd);

		HDC GetPaintDC() const;
		HWND GetPaintWindow() const;

		Sizef GetClientSize() const;

		void UpdateLayout();
		void Invalidate(RECT rcItem);

		static void MessageLoop();
		static bool TranslateMessage(const LPMSG pMsg);
=======
		void Init();
>>>>>>> d7d7322973c15255a2595ab89885b4ef0270c6ca

	protected:
		HWND mHWndPaint;
		HDC mHDCPaint;
		HDC mHDCOffscreen;
		HBITMAP mHBMPOffscreen;
		HWND mHWndTooltip;
<<<<<<< HEAD

		unsigned int mMsgMouseWheel;

		static HINSTANCE mHLangInst;
		static HINSTANCE mHInstance;
=======
>>>>>>> d7d7322973c15255a2595ab89885b4ef0270c6ca
	};

}

#endif