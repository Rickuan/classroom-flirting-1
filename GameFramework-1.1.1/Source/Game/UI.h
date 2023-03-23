using namespace game_framework {

	class UI{
		public:
			UI();						// constructor
			void init();
			void load_ui_pictures();
		private:
			int time;					// current time
			int time_left;				// max_time - time
			const int max_time;			// maximum time of the game
			CMovingBitmap clock;
			//! �W�U�ӱ誺���s���ӭn��L��
			//! HP�g�b�k�D������AUI�o�̥Τ@��getter ���ȡA�A�Q���load��q���Ϥ�
			float hp;					// HP
			CMovingBitmap hp_board;
			CMovingBitmap hp_heart[9];
			//! beauty time�g�b�k�D������AUI�o�̥Τ@��getter �����L�A��ܵL�Įɶ�
			bool is_invincible;
			CMovingBitmap invincible_board;
			//! ���A���k�ͼƶq�g�b�k�ͨ���AUI�o�̥Τ@�� getter���ȡA�p���`���Z
			int score;					// �`���Z
			CMovingBitmap score_board;
			CMovingBitmap score_num[8];
	};
}