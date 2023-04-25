use im_rc::HashSet;
use proconio::input;

fn main() {
    input! {
        n: usize,
        w: [String; n],
    }

    let mut ans = "No";
    let w: HashSet<String> = w.iter().cloned().collect();
    if w.contains("and")
        || w.contains("not")
        || w.contains("that")
        || w.contains("the")
        || w.contains("you")
    {
        ans = "Yes";
    }

    println!("{}", ans);
}
