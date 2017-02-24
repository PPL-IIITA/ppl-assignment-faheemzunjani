namespace data {
	class luxury_gift {
		private:
			float price;
			int value;
			int rating;
			int difficulty;

		public:
			luxury_gift(float price, int value, int rating, int difficulty);
			float get_price();
			int get_value();
			int get_rating();
			int get_difficulty();
	}
}