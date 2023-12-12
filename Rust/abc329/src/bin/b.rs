use std::iter::FromIterator;

use im_rc::HashSet;
use proconio::input;

fn main() {
    input! {
        n: usize,
        a: [usize; n],
    };

    let unique: HashSet<usize> = a.into_iter().collect();
    let mut vec_unique = Vec::from_iter(unique);
    vec_unique.sort();

    println!("{:?}", vec_unique[vec_unique.len() - 2]);
}
