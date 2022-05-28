#pragma once
#include <string>
using namespace System;


namespace TA {
	ref class credentials {

	private:
		static array<String^, 2>^ sign = gcnew array <String^, 2>{ {"genaru", "gege"}, { "dkp", "ta" }};
		static String^ username;
		static String^ password;

	public:
		static void setCredentials(String^ a, String^ b) {
			username = a;
			password = b;
		}
		static bool checkCredentials() {
			for (int i = 0; i < 2; i++) {
				if (username == sign[i, 0] && password == sign[i, 1]) {
					return true;
				}
			}
			return false;
		}
	};
}
